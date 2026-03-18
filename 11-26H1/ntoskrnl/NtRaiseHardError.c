/*
 * XREFs of NtRaiseHardError @ 0x140840420
 * Callers:
 *     DifNtRaiseHardErrorWrapper @ 0x1406875B0 (DifNtRaiseHardErrorWrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseHardError @ 0x140B06D30 (ExRaiseHardError.c)
 *     ExpRaiseHardError @ 0x140B33F0C (ExpRaiseHardError.c)
 */

__int64 __fastcall NtRaiseHardError(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v7; // r13d
  __int64 v8; // r15
  unsigned int v9; // esi
  unsigned int v10; // r14d
  unsigned int v11; // edi
  int ULongFromUser; // eax
  volatile void *v14; // rcx
  unsigned int *v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // ebx
  unsigned int v18; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-114h]
  unsigned int v20; // [rsp+48h] [rbp-110h]
  __int64 v21; // [rsp+58h] [rbp-100h]
  __int128 v22; // [rsp+60h] [rbp-F8h]
  _QWORD Src[5]; // [rsp+70h] [rbp-E8h] BYREF
  volatile void *v24[15]; // [rsp+98h] [rbp-C0h] BYREF

  v7 = a3;
  v8 = a2;
  v9 = a1;
  v19 = a1;
  v10 = 0;
  v18 = 0;
  if ( a2 > 5 )
    return 3221225712LL;
  if ( a4 )
  {
    if ( a2 )
      goto LABEL_6;
    return 3221225712LL;
  }
  if ( a2 )
    return 3221225712LL;
LABEL_6:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v11 = a5;
    if ( a5 > 6 && a5 - 7 >= 2 )
      return 3221225714LL;
    ULongFromUser = RtlReadULongFromUser(a6);
    RtlWriteULongToUser(a6, ULongFromUser);
    if ( a4 )
    {
      if ( 8 * v8 && ((unsigned __int8)a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(Src, a4, 8 * v8);
      memmove(v24, Src, 8 * v8);
      if ( v7 )
      {
        while ( 1 )
        {
          v20 = v10;
          if ( v10 >= (unsigned int)v8 )
            break;
          if ( _bittest(&v7, v10) )
          {
            v21 = 16LL;
            v14 = (volatile void *)Src[v10];
            v21 = 1LL;
            ProbeForRead(v14, 1uLL, 8u);
            v15 = (unsigned int *)Src[v10];
            DWORD1(v22) = 0;
            LODWORD(v22) = RtlReadULongFromUser(v15);
            *((_QWORD *)&v22 + 1) = RtlReadULong64FromUser(v15 + 2);
            v16 = 2LL * v10;
            *(_OWORD *)&v24[v16 + 5] = v22;
            ProbeForRead(v24[v16 + 6], WORD1(v24[v16 + 5]), 1u);
            v24[v10] = &v24[v16 + 5];
          }
          ++v10;
        }
        v9 = v19;
      }
      v11 = a5;
    }
    v17 = ExpRaiseHardError(v9, v8, v7, (unsigned int)Src, (__int64)v24, v11, (__int64)&v18);
    v19 = v17;
    RtlWriteULongToUser(a6, v18);
  }
  else
  {
    v17 = ExRaiseHardError(a1, a2, a3, a4, a5, &v18);
    *a6 = v18;
  }
  return v17;
}

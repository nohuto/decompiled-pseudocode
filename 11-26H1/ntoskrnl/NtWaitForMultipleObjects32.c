/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x140A22E30
 * Callers:
 *     DifNtWaitForMultipleObjects32Wrapper @ 0x140691310 (DifNtWaitForMultipleObjects32Wrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ObWaitForMultipleObjects @ 0x140A230B0 (ObWaitForMultipleObjects.c)
 */

__int64 __fastcall NtWaitForMultipleObjects32(ULONG Count, _BYTE *Src, unsigned int a3, BOOLEAN a4, _QWORD *a5)
{
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r14
  _QWORD *v11; // rax
  __int64 v12; // r9
  _QWORD v14[3]; // [rsp+48h] [rbp-350h] BYREF
  _BYTE v15[256]; // [rsp+60h] [rbp-338h] BYREF
  _BYTE v16[512]; // [rsp+160h] [rbp-238h] BYREF

  v8 = Count;
  v9 = a5;
  memset_0(v16, 0, sizeof(v16));
  v14[0] = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return 3221225711LL;
  if ( a3 > 1 )
    return 3221225713LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a5 )
    {
      v14[0] = RtlReadULong64FromUser(a5);
      v9 = v14;
      v14[1] = v14;
    }
    RtlCopyFromUser(v15, Src, 4 * v8);
    Src = v15;
    v14[2] = v15;
  }
  if ( (_DWORD)v8 )
  {
    v11 = v16;
    v12 = v8;
    do
    {
      *v11 = *(int *)Src;
      Src += 4;
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  return ObWaitForMultipleObjects(v8, PreviousMode, a4, (__int64)v9);
}

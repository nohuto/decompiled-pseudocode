/*
 * XREFs of PopCaptureReasonContext @ 0x1404279AC
 * Callers:
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 * Callees:
 *     PopSafeCopyUnicodeString @ 0x140427C60 (PopSafeCopyUnicodeString.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // r13d
  int v8; // esi
  unsigned __int64 v9; // rax
  char *v10; // r15
  unsigned int i; // r14d
  unsigned __int16 UShortFromUser; // ax
  _QWORD *Pool2; // r14
  unsigned __int64 v14; // r15
  int v15; // eax
  int v16; // ebx
  unsigned int v18; // esi
  char *v19; // r15
  const UNICODE_STRING *v20; // rbx
  char *v21; // [rsp+20h] [rbp-30h]
  __int128 v22; // [rsp+20h] [rbp-30h]
  __int128 v23; // [rsp+40h] [rbp-10h] BYREF

  *a4 = 0LL;
  v6 = 48LL;
  v23 = 0LL;
  if ( a3 )
    *a3 = 0;
  v7 = 0;
  v21 = 0LL;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 )
      return 3221225485LL;
    v8 = *(_DWORD *)(a1 + 4);
    if ( (v8 & 1) != 0 )
    {
      if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) != 0 )
        return 3221225485LL;
      v6 = *(unsigned __int16 *)(a1 + 8) + 82LL;
    }
    else
    {
      if ( (v8 & 2) != 0 )
      {
        if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) == 0 )
        {
          v7 = *(_DWORD *)(a1 + 28);
          v6 = *(unsigned __int16 *)(a1 + 8) + 82LL;
          v9 = 16LL * v7;
          if ( v9 <= 0xFFFFFFFF )
          {
            v10 = *(char **)(a1 + 32);
            v21 = v10;
            if ( a2 )
              ProbeForRead(v10, (unsigned int)v9, 4u);
            for ( i = 0; i < v7; ++i )
            {
              if ( a2 )
                UShortFromUser = RtlReadUShortFromUser(&v10[16 * i]);
              else
                UShortFromUser = *(_WORD *)&v10[16 * i];
              if ( v6 + UShortFromUser + 2LL < v6 )
                return 3221225485LL;
              v6 += UShortFromUser + 2LL;
            }
            goto LABEL_18;
          }
        }
        return 3221225485LL;
      }
      if ( v8 >= 0 )
        return 3221225485LL;
    }
  }
  else
  {
    v8 = 0x80000000;
  }
LABEL_18:
  Pool2 = (_QWORD *)ExAllocatePool2((a2 != 0) + 256LL);
  if ( Pool2 )
  {
    *a4 = Pool2;
    if ( v8 < 0 )
    {
      Pool2[5] = 0LL;
    }
    else
    {
      v14 = ((unsigned __int64)Pool2 + 55) & 0xFFFFFFFFFFFFFFF8uLL;
      Pool2[5] = (char *)Pool2 + v6 - v14;
      *(_DWORD *)v14 = v8;
      *(_QWORD *)(v14 + 8) = 32LL;
      v15 = PopSafeCopyUnicodeString((PCUNICODE_STRING)(a1 + 8));
      v16 = v15;
      if ( (v8 & 1) != 0 )
      {
        if ( v15 < 0 )
        {
LABEL_22:
          ExFreePoolWithTag(Pool2, 0x78435250u);
          *a4 = 0LL;
          return (unsigned int)v16;
        }
      }
      else
      {
        if ( v15 < 0 )
          goto LABEL_22;
        *(_WORD *)(v14 + 16) = *(_WORD *)(a1 + 24);
        *(_DWORD *)(v14 + 20) = v7;
        *(_QWORD *)(v14 + 24) = 32LL;
        v18 = 0;
        v19 = v21;
        while ( v18 < v7 )
        {
          v20 = (const UNICODE_STRING *)&v19[16 * v18];
          if ( a2 )
          {
            *(_QWORD *)&v22 = (unsigned int)RtlReadULongFromUser(&v19[16 * v18]);
            *((_QWORD *)&v22 + 1) = RtlReadULong64FromUser(&v20->Buffer);
            v20 = (const UNICODE_STRING *)&v23;
            v23 = v22;
          }
          v16 = PopSafeCopyUnicodeString(v20);
          if ( v16 < 0 )
            goto LABEL_22;
          ++v18;
        }
      }
      if ( a3 )
        *a3 = (*(_DWORD *)(a1 + 4) & 4) != 0;
    }
    return 0;
  }
  return 3221225626LL;
}

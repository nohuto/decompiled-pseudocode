/*
 * XREFs of RtlIsUntrustedObject @ 0x18013CE80
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlFindAceByType @ 0x1800E0410 (RtlFindAceByType.c)
 *     NtQuerySecurityObject @ 0x180161C50 (NtQuerySecurityObject.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlIsUntrustedObject(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *Heap_0; // rbx
  char v6; // bp
  __int64 result; // rax
  int v8; // esi
  __int64 v9; // rdi
  unsigned __int8 *AceByType; // rax
  int v11; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v12[3]; // [rsp+34h] [rbp-C4h] BYREF
  _BYTE v13[128]; // [rsp+40h] [rbp-B8h] BYREF

  *a3 = 1;
  v11 = 0;
  Heap_0 = v13;
  if ( !a2 && a1 )
  {
    v6 = 0;
    result = NtQuerySecurityObject(a1, 16LL, v13, 124LL, &v11);
    v8 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741789 )
        return result;
      Heap_0 = (_BYTE *)RtlAllocateHeap_0();
      if ( !Heap_0 )
        return (unsigned int)(v8 - 12);
      v6 = 1;
      v8 = NtQuerySecurityObject(a1, 16LL, Heap_0, 124LL, &v11);
      if ( v8 < 0 )
      {
LABEL_21:
        RtlFreeHeap_0();
        return (unsigned int)v8;
      }
    }
    if ( (Heap_0[2] & 0x10) != 0 )
    {
      if ( *((__int16 *)Heap_0 + 1) >= 0 )
      {
        v9 = *((_QWORD *)Heap_0 + 3);
      }
      else
      {
        if ( !*((_DWORD *)Heap_0 + 3) )
          goto LABEL_19;
        v9 = (__int64)&Heap_0[*((unsigned int *)Heap_0 + 3)];
      }
      if ( v9 )
      {
        v12[0] = 0;
        while ( 1 )
        {
          AceByType = RtlFindAceByType(v9, 17, v12);
          if ( !AceByType )
            break;
          if ( (AceByType[1] & 8) == 0 )
          {
            if ( !AceByType[9] || *(_DWORD *)&AceByType[4 * AceByType[9] + 12] < 0x2000u )
              goto LABEL_20;
            break;
          }
        }
      }
    }
LABEL_19:
    *a3 = 0;
LABEL_20:
    if ( !v6 )
      return (unsigned int)v8;
    goto LABEL_21;
  }
  return 3221225485LL;
}

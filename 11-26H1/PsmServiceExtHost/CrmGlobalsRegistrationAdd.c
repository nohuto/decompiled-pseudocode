/*
 * XREFs of CrmGlobalsRegistrationAdd @ 0x180030C60
 * Callers:
 *     CrmRegistrationStart @ 0x180030A3C (CrmRegistrationStart.c)
 *     CrmRpcSrvRegister @ 0x180031660 (CrmRpcSrvRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsRegistrationAdd(__int64 a1)
{
  DWORD CurrentThreadId; // eax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&unk_1800E3938);
  CurrentThreadId = GetCurrentThreadId();
  v4 = xmmword_1800E3948;
  dword_1800E3940 = CurrentThreadId;
  if ( (BYTE8(xmmword_1800E3948) & 1) != 0 && (_QWORD)xmmword_1800E3948 )
    v4 = (unsigned __int64)&xmmword_1800E3948 ^ xmmword_1800E3948;
  LOBYTE(v3) = 0;
  if ( v4 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      if ( v3 < *(_QWORD *)(v4 - 16) )
      {
        v5 = *(_QWORD *)v4;
        if ( (BYTE8(xmmword_1800E3948) & 1) != 0 )
        {
          if ( !v5 )
          {
LABEL_16:
            LOBYTE(v3) = 0;
            break;
          }
          v5 ^= v4;
        }
        if ( !v5 )
          goto LABEL_16;
      }
      else
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( (BYTE8(xmmword_1800E3948) & 1) != 0 )
        {
          if ( !v5 )
          {
LABEL_9:
            LOBYTE(v3) = 1;
            break;
          }
          v5 ^= v4;
        }
        if ( !v5 )
          goto LABEL_9;
      }
      v4 = v5;
    }
  }
  RtlRbInsertNodeEx(&xmmword_1800E3948, v4, v3, a1 + 32);
  dword_1800E3940 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800E3938);
}

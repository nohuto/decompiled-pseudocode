/*
 * XREFs of HvpApplyLegacyLogFile @ 0x140868C18
 * Callers:
 *     HvApplyLogFiles @ 0x140AEE6F0 (HvApplyLogFiles.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGenerateLogMetadata @ 0x1408BD694 (HvpGenerateLogMetadata.c)
 *     HvpIsMetadataArrayCoherent @ 0x140ADDCF0 (HvpIsMetadataArrayCoherent.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140B10798 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpUpdateRecoveryVector @ 0x140B47574 (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvpApplyLegacyLogFile(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  ULONG v12; // r14d
  int v13; // r14d
  __int64 v14; // rsi
  unsigned int v16; // [rsp+40h] [rbp-51h]
  _DWORD BitMapHeader[5]; // [rsp+44h] [rbp-4Dh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-39h]
  __int64 v19; // [rsp+60h] [rbp-31h]
  _DWORD v20[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v21; // [rsp+70h] [rbp-21h]
  int v22; // [rsp+78h] [rbp-19h]
  int v23; // [rsp+7Ch] [rbp-15h]
  __int128 v24; // [rsp+80h] [rbp-11h]

  v19 = a6;
  v9 = a1[10];
  v10 = *(_QWORD *)(a2 + 16);
  v16 = v9 >> 12;
  BugCheckParameter2 = a4;
  BitMapHeader[0] = 0;
  BitMapHeader[2] = 0;
  v21 = 0LL;
  v24 = 0LL;
  v11 = guard_dispatch_icall_no_overrides(v10, 512LL);
  if ( v11 >= 0 )
  {
    if ( MEMORY[0] == 1414678852 )
    {
      BitMapHeader[1] = a1[10] >> 9;
      *(_QWORD *)&BitMapHeader[3] = 4LL;
      v12 = RtlNumberOfSetBits((PRTL_BITMAP)&BitMapHeader[1]);
      if ( v12 )
      {
        v13 = v12 << 9;
        HvpGenerateLogMetadata((PRTL_BITMAP)&BitMapHeader[1]);
        v14 = guard_dispatch_icall_no_overrides(0LL, 0LL);
        if ( v14 )
        {
          HvpGenerateLogMetadata((PRTL_BITMAP)&BitMapHeader[1]);
          v22 = a1[10];
          v20[0] = 1162638920;
          v23 = 0;
          v20[1] = v13 + 40;
          if ( (unsigned __int8)HvpIsMetadataArrayCoherent(v20, v14, 0LL) )
          {
            v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 16), (v16 + 1027) & 0xFFFFFE00);
            if ( v11 >= 0 )
            {
              v11 = HvpApplyLogEntryDataToFileBackedHive(BugCheckParameter2, v13, (__int64)BitMapHeader);
              if ( v11 >= 0 )
              {
                if ( (v21 & 1) != 0 )
                  a1[36] |= 1u;
                if ( a7 )
                  HvpUpdateRecoveryVector(v14, 0LL, a7);
                v11 = 1073741833;
              }
            }
          }
          else
          {
            v11 = -1073741492;
          }
          guard_dispatch_icall_no_overrides(v14, 0LL);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return 0;
      }
    }
    else if ( BYTE2(NlsMbOemCodePageTag) || (CmpContextListLock.ApcStateFill[36] & 6) != 0 )
    {
      a1[1022] |= 4u;
      return 1073741833;
    }
    else
    {
      return (unsigned int)-1073741492;
    }
  }
  return (unsigned int)v11;
}

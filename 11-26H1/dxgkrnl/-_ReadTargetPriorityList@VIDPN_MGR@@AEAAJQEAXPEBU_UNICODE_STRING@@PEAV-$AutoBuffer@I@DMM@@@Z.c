/*
 * XREFs of ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x14025E1A4
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14042131C (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x14005EE30 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadTargetPriorityList(__int64 a1, void *a2, struct _UNICODE_STRING *a3, _QWORD *a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax
  char *v12; // rdi
  NTSTATUS v13; // ebx
  size_t v14; // rbx
  void *v15; // rcx
  void **v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h]
  void **v18; // [rsp+48h] [rbp-28h]
  PVOID KeyValueInformation; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  int v23; // [rsp+94h] [rbp+24h]

  v23 = HIDWORD(a1);
  ResultLength = 0;
  v7 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v10 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    v16 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    KeyValueInformation = 0LL;
    v18 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v17 = 0LL;
    v20 = 0LL;
    v21 = 256LL;
    DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v16, ResultLength);
    v12 = (char *)KeyValueInformation;
    if ( KeyValueInformation )
    {
      v13 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, KeyValueInformation, ResultLength, &ResultLength);
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 915;
LABEL_14:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v16);
        return (unsigned int)v13;
      }
      v14 = (ResultLength - 12) & 0xFFFFFFFC;
      DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a4, v14);
      v15 = (void *)a4[4];
      if ( v15 )
      {
        memmove(v15, v12 + 12, v14);
        v13 = 0;
        goto LABEL_14;
      }
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 932;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 899;
    }
    v13 = -1073741801;
    goto LABEL_14;
  }
  if ( v7 >= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 885;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = v10;
  result = 3221226021LL;
  WdLogGlobalForLineNumber = 888;
  return result;
}

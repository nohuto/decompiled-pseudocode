/*
 * XREFs of ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18006B5C4
 * Callers:
 *     ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18004DFA4 (--$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QE.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004DFFC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18006B7C4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector_(
        ViewManagerInteropTraceLogging *this,
        int a2,
        const union _RM_ACTIVITY_IMPORTANCE *a3)
{
  const struct _tlgProvider_t *v5; // r10
  unsigned __int16 v6; // r9
  __int16 v7; // ax
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  __int16 v10; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v11; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v12; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v14; // [rsp+3Ah] [rbp-C6h] BYREF
  __int16 v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v17[3]; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  _DWORD *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  char *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int16 *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int16 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int16 *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  __int16 *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int16 *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  __int16 *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  char *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]

  v5 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *(_WORD *)a3;
    v7 = (*(_WORD *)a3 >> 7) & 1;
    v8 = *((_BYTE *)a3 + 2);
    v12 = v7;
    v17[0] = a2;
    v13 = (v6 >> 6) & 1;
    v10 = HIBYTE(v6) & 1;
    v14 = (v6 >> 4) & 3;
    v9 = *((_BYTE *)a3 + 3);
    v16 = *(_DWORD *)a3;
    v41 = &v8;
    v39 = &v10;
    v37 = &v11;
    v35 = &v12;
    v33 = &v13;
    v31 = &v14;
    v29 = &v15;
    v27 = &v9;
    v25 = &v16;
    v23 = v17;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v5 + 1);
    v11 = v6 & 1;
    v15 = (v6 >> 1) & 7;
    v42 = 1LL;
    v40 = 2LL;
    v38 = 2LL;
    v36 = 2LL;
    v34 = 2LL;
    v32 = 2LL;
    v30 = 2LL;
    v28 = 1LL;
    v26 = 4LL;
    v24 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v20 = &unk_18080326C;
    UserData.Reserved = 2;
    v21 = 175;
    v22 = 1;
    v17[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
  }
}

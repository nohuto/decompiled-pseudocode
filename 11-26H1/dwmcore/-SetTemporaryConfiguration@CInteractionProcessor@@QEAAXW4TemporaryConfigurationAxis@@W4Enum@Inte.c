/*
 * XREFs of ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801A2ED0
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall CInteractionProcessor::SetTemporaryConfiguration(
        _BYTE *a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        int a5)
{
  int v5; // r14d
  int v9; // edi
  _BYTE *v10; // r11
  int v11; // ecx
  __int64 v12; // r12
  int v13; // edx
  ULONG result; // eax
  unsigned int v15; // r8d
  int v16; // r8d
  _BYTE *v17; // rsi
  char v18; // bl
  char v19; // r9
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v29[3]; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE *v30; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  _QWORD *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  _DWORD *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  int *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  int *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  int *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  int *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]

  v5 = a4;
  v9 = -1;
  v10 = &a1[a3 != 0 ? 1308LL : 1272LL];
  v11 = 0;
  v12 = 3LL;
  if ( a2 )
  {
    v13 = a2 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v9 = 2;
        v11 = 48;
      }
    }
    else
    {
      v9 = 1;
      v11 = 12;
    }
  }
  else
  {
    v9 = 0;
    v11 = 3;
  }
  result = a5 | ~v11;
  if ( v9 == -1
    || v10[12 * v9] == a4 && (!a4 || *(_DWORD *)&v10[12 * v9 + 4] == result)
    || (v10[12 * v9] = a4, *(_DWORD *)&v10[12 * v9 + 4] = result, *(_DWORD *)&v10[12 * v9 + 8] = v11, a3) )
  {
    if ( a3 == 1 )
    {
      v17 = a1 + 1308;
      v18 = a1[1264] & 0xFD;
      a1[1264] = v18;
      do
      {
        v19 = 2 * *v17;
        v17 += 12;
        v18 = v18 & 0xFD ^ (v18 | v19) & 2;
        a1[1264] = v18;
        --v12;
      }
      while ( v12 );
    }
  }
  else
  {
    a1[148] |= 1u;
    a1[308] |= 1u;
    a1[468] |= 1u;
    a1[628] |= 1u;
  }
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v15 = (unsigned __int8)a1[1264];
    v22 = a5 | ~v11;
    v23 = v11;
    v20 = (v15 >> 1) & 1;
    v24 = a5;
    v26 = v5;
    v27 = v9;
    v28 = a3;
    v16 = *(_DWORD *)&v10[12 * v9 + 4];
    v25 = (unsigned __int8)v10[12 * v9];
    v56 = &v20;
    v54 = &v21;
    v52 = &v22;
    v50 = &v23;
    v48 = &v24;
    v46 = &v25;
    v44 = &v26;
    v42 = &v27;
    v40 = &v28;
    v38 = v29;
    v36 = &v30;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1803DC888;
    v21 = v16;
    v29[0] = a2;
    v30 = a1;
    v57 = 4LL;
    v55 = 4LL;
    v53 = 4LL;
    v51 = 4LL;
    v49 = 4LL;
    v47 = 4LL;
    v45 = 4LL;
    v43 = 4LL;
    v41 = 4LL;
    v39 = 4LL;
    v37 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1803DC888;
    v33 = &unk_1803B1E05;
    UserData.Reserved = 2;
    v34 = 225;
    v35 = 1;
    v29[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
  }
  return result;
}

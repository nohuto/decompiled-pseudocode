/*
 * XREFs of ?DxgkDDisplayEnumInternal@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@D@Z @ 0x1401CDF60
 * Callers:
 *     DxgkDDisplayEnum2 @ 0x1401CFB10 (DxgkDDisplayEnum2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A56A4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER2@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER2@@I@Z @ 0x140192C58 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER2@@$00@@QEAAPEAU_D3DKMT_D.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET2@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET2@@I@Z @ 0x1401CD8B4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET2@@$00@@QEAAPEAU_D3DKMT_DD.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z @ 0x1401CDE68 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z.c)
 *     ?IsMismatchedKernelAbiSession@@YA_NXZ @ 0x1403C2464 (-IsMismatchedKernelAbiSession@@YA_NXZ.c)
 */

__int64 __fastcall DxgkDDisplayEnumInternal(struct _D3DKMT_DDISPLAY_ENUM2 *a1)
{
  size_t v3; // rdi
  size_t v4; // rsi
  char *v5; // rcx
  char *v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // r14d
  char *v10; // r8
  int v11; // ecx
  unsigned int i; // ebx
  char *v13; // r8
  int v14; // ecx
  unsigned int j; // ebx
  __int128 Src; // [rsp+50h] [rbp-748h] BYREF
  volatile void *Address[2]; // [rsp+60h] [rbp-738h]
  volatile void *v18[2]; // [rsp+70h] [rbp-728h]
  unsigned int v19; // [rsp+80h] [rbp-718h]
  unsigned int v20; // [rsp+84h] [rbp-714h]
  __int128 v21; // [rsp+88h] [rbp-710h] BYREF
  char *v22; // [rsp+98h] [rbp-700h]
  volatile void *v23; // [rsp+A0h] [rbp-6F8h]
  volatile void *v24; // [rsp+A8h] [rbp-6F0h]
  char *v25; // [rsp+B0h] [rbp-6E8h]
  PVOID v26; // [rsp+C0h] [rbp-6D8h] BYREF
  _BYTE v27[572]; // [rsp+C8h] [rbp-6D0h] BYREF
  int v28; // [rsp+304h] [rbp-494h]
  PVOID P; // [rsp+310h] [rbp-488h] BYREF
  _BYTE v30[1096]; // [rsp+318h] [rbp-480h] BYREF
  int v31; // [rsp+760h] [rbp-38h]

  Src = 0LL;
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)v18 = 0LL;
  if ( IsMismatchedKernelAbiSession() )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"DxgkDDisplayEnum is called from container with different OS version.");
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10861;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkDDisplayEnum is called from container with different OS version., returning 0x%I64x",
      -1073741735LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225561LL;
  }
  else
  {
    RtlCopyFromUser(&Src, a1, 0x30uLL);
    ProbeForWrite(Address[0], 572LL * DWORD2(Src), 4u);
    ProbeForWrite(v18[1], 1096LL * HIDWORD(Address[1]), 4u);
    v3 = 572LL;
    if ( ((int)Src < 1 || HIDWORD(Src) >= 0x23C) && ((v4 = 1096LL, (int)Src < 1) || LODWORD(v18[0]) >= 0x448) )
    {
      v5 = 0LL;
      v26 = 0LL;
      v28 = 0;
      v6 = 0LL;
      P = 0LL;
      v31 = 0;
      v7 = DWORD2(Src);
      if ( DWORD2(Src) )
      {
        PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER2,1>::AllocateElements((__int64 *)&v26, DWORD2(Src));
        v7 = DWORD2(Src);
        v5 = (char *)v26;
        v6 = (char *)P;
      }
      v8 = HIDWORD(Address[1]);
      if ( HIDWORD(Address[1]) )
      {
        PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET2,1>::AllocateElements((__int64 *)&P, HIDWORD(Address[1]));
        v8 = HIDWORD(Address[1]);
        v7 = DWORD2(Src);
        v5 = (char *)v26;
        v6 = (char *)P;
      }
      if ( (!v7 || v5) && (!(_DWORD)v8 || v6) )
      {
        v21 = Src;
        v23 = Address[1];
        v24 = v18[0];
        v22 = v5;
        v25 = v6;
        v9 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM2 *)&v21);
        DWORD1(Src) = DWORD1(v21);
        LODWORD(Address[1]) = (_DWORD)v23;
        LODWORD(Src) = 1;
        RtlCopyToUser(a1, &Src, 0x30uLL);
        if ( v9 >= 0 )
        {
          v10 = (char *)Address[0];
          if ( Address[0] )
          {
            v11 = HIDWORD(Src);
            if ( HIDWORD(Src) < 0x23C )
              v3 = HIDWORD(Src);
            for ( i = 0; ; ++i )
            {
              v19 = i;
              if ( i >= DWORD1(v21) )
                break;
              RtlCopyToUser(&v10[i * v11], &v22[572 * i], v3);
              v10 = (char *)Address[0];
              v11 = HIDWORD(Src);
            }
          }
          v13 = (char *)v18[1];
          if ( v18[1] )
          {
            v14 = (int)v18[0];
            if ( LODWORD(v18[0]) < 0x448 )
              v4 = LODWORD(v18[0]);
            for ( j = 0; ; ++j )
            {
              v20 = j;
              if ( j >= (unsigned int)v23 )
                break;
              RtlCopyToUser(&v13[j * v14], &v25[1096 * j], v4);
              v13 = (char *)v18[1];
              v14 = (int)v18[0];
            }
          }
        }
        if ( P != v30 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v31 = 0;
        if ( v26 != v27 && v26 )
          ExFreePoolWithTag(v26, 0);
        return (unsigned int)v9;
      }
      else
      {
        WdLogSingleEntry2(2LL, v7, v8);
        WdLogGlobalForLineNumber = 10905;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to allocate buffers for DispBrokerEnum: 0x%I64x adapter, 0x%I64x targets",
          DWORD2(Src),
          HIDWORD(Address[1]),
          0LL,
          0LL,
          0LL);
        if ( P != v30 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v31 = 0;
        if ( v26 != v27 )
        {
          if ( v26 )
            ExFreePoolWithTag(v26, 0);
        }
        return 3221225495LL;
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
}

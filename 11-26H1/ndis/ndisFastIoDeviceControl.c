/*
 * XREFs of ndisFastIoDeviceControl @ 0x140058C20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x140138ED8 (RtlCopyToUser.c)
 *     ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x14013A0DC (-ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDEN.c)
 */

char __fastcall ndisFastIoDeviceControl(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        struct _NDIS_CONVERT_IDENTIFIER_OUT *Src,
        int a6,
        int a7,
        __int64 a8,
        _DEVICE_OBJECT *a9)
{
  __int128 *v9; // rdi
  __int64 v11; // rax
  __int64 v12; // r10
  KPROCESSOR_MODE PreviousMode; // r15
  struct _NDIS_CONVERT_IDENTIFIER_OUT *v14; // r14
  int v15; // eax
  __int128 v16; // [rsp+60h] [rbp-98h] BYREF
  __int128 v17; // [rsp+70h] [rbp-88h]
  __int128 v18; // [rsp+80h] [rbp-78h]
  __int64 v19; // [rsp+90h] [rbp-68h]
  _OWORD v20[2]; // [rsp+98h] [rbp-60h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-40h]

  v9 = a3;
  if ( a9 == ndisLoaderDeviceObject )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( !v11 )
      return 0;
    if ( *(_DWORD *)v11 != 183160574 )
      return 0;
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL) + 80LL);
    if ( !v12 )
      return 0;
    return (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(v12 + 80))(a1, a2, a3);
  }
  else
  {
    if ( a9 != ndisDeviceObject || a7 != 1507511 )
      return 0;
    if ( a4 == 56 && a6 == 40 )
    {
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      memset(v20, 0, sizeof(v20));
      v21 = 0LL;
      PreviousMode = ExGetPreviousMode();
      if ( PreviousMode )
      {
        ProbeForRead(v9, 1uLL, 8u);
        v16 = *v9;
        v17 = v9[1];
        v18 = v9[2];
        v19 = *((_QWORD *)v9 + 6);
        v9 = &v16;
        v14 = (struct _NDIS_CONVERT_IDENTIFIER_OUT *)v20;
      }
      else
      {
        v14 = Src;
      }
      v15 = ndisConvertIdentifier(KeGetCurrentThread(), (const struct _NDIS_CONVERT_IDENTIFIER_IN *)v9, v14);
      *(_DWORD *)a8 = v15;
      if ( !v15 )
      {
        if ( PreviousMode )
          RtlCopyToUser(Src, v14, 0x28uLL);
        *(_QWORD *)(a8 + 8) = 40LL;
      }
    }
    else
    {
      *(_DWORD *)a8 = -1073741811;
    }
    return 1;
  }
}

/*
 * XREFs of NdisLWMInitializeNetworkInterface @ 0x14000AE00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq_guid_qd @ 0x140072D70 (WPP_RECORDER_SF_qq_guid_qd.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     WPP_RECORDER_SF_qq_guid_ @ 0x140097008 (WPP_RECORDER_SF_qq_guid_.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015F7C0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall NdisLWMInitializeNetworkInterface(
        ULONG_PTR BugCheckParameter3,
        void *a2,
        const struct _GUID *a3,
        struct _NDIS_MINIPORT_BLOCK **a4)
{
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-48h]
  struct _NDIS_MINIPORT_BLOCK *v15; // [rsp+70h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, (_DWORD)a4);
  *a4 = 0LL;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( *(char *)(BugCheckParameter3 + 26) >= 0 )
    ndisBugCheckEx(0x29uLL, 2uLL, BugCheckParameter3, 0LL);
  v15 = 0LL;
  v9 = ndisLWMCreateMiniport((struct _NDIS_M_DRIVER_BLOCK *)BugCheckParameter3, a3, &v15);
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        1,
        155,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids);
    }
  }
  else
  {
    v15->MiniportAdapterContext = a2;
    *a4 = v15;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq_guid_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      v11,
      v12,
      v14,
      BugCheckParameter3,
      (char)a2,
      (__int64)a3,
      (char)*a4,
      v9);
  return v9;
}

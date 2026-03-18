/*
 * XREFs of ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z @ 0x180232B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z @ 0x18014FDD0 (-CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18018BFC0 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A5BD4 (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CreateSharedResource(struct CChannel *a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-1Ch] BYREF
  const char *v15; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v16, a1);
  v13 = 0;
  v8 = CChannel::MilTypeFromDwmType(a2, &v13);
  if ( v8 < 0 )
  {
    v9 = 681LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 80LL))(v17);
    return (unsigned int)v8;
  }
  v11 = *((_QWORD *)a1 + 8);
  v14 = 0;
  v15 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, __int64, const char **))(*(_QWORD *)v11 + 32LL))(
         v11,
         v13,
         &v14,
         a4,
         &v15);
  if ( v8 < 0 )
  {
    v9 = 688LL;
    goto LABEL_3;
  }
  CChannel::CreateNewHandleTableEntry(a1, v14, v13, v15);
  v12 = v17;
  *a3 = v14;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12);
  return 0LL;
}

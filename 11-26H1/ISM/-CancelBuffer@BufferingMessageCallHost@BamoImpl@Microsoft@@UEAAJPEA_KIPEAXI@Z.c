/*
 * XREFs of ?CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x1800ABE40
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x1800AE418 (-TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::CancelBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5)
{
  unsigned __int64 v8; // rdx
  unsigned int v9; // ebx
  const char *v11; // r9
  struct Microsoft::BamoImpl::BufferStream *v12; // rdi
  __int64 v13; // rdx
  void ***i; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BufferStream *v17; // [rsp+50h] [rbp+8h] BYREF

  v8 = *a2;
  v9 = 0;
  v17 = 0LL;
  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    v8,
    &v17);
  v12 = v17;
  if ( !v17 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x11B,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      v11);
  v13 = *((_QWORD *)v17 + 1);
  for ( i = *(void ****)v17; ; ++i )
  {
    if ( i == (void ***)v13 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x12E,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
        v11);
    if ( **i == a4 )
      break;
    ++v9;
  }
  std::_Copy_memmove<enum _Button *,enum _Button *>(
    (void *)(*(_QWORD *)v17 + 8LL * v9 + 8),
    v13,
    (void *)(*(_QWORD *)v17 + 8LL * v9));
  *((_QWORD *)v12 + 1) -= 8LL;
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD, void *, unsigned int))(**((_QWORD **)this + 1)
                                                                                             + 40LL))(
           *((_QWORD *)this + 1),
           a2,
           a3,
           a4,
           a5);
}

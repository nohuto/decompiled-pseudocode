/*
 * XREFs of ?RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z @ 0x1400ADD80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveAllChildren(
        DirectComposition::CVisualMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        bool *a3)
{
  struct DirectComposition::CResourceMarshaler *v3; // rdi
  __int64 v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  __int64 v10; // rcx

  v3 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 22);
  if ( v3 || *((_QWORD *)this + 25) )
  {
    *((_DWORD *)this + 4) |= 0x4000u;
    while ( v3 )
    {
      *((_QWORD *)this + 22) = *((_QWORD *)v3 + 23);
      v8 = *(_QWORD *)v3;
      *((_QWORD *)v3 + 23) = 0LL;
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, struct _RTL_GENERIC_TABLE *))(v8 + 16))(
        v3,
        a2);
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v3);
      v3 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 22);
    }
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 25);
      if ( !v10 )
        break;
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = *(_QWORD *)(v10 + 208);
      *(_DWORD *)(v10 + 16) &= ~8u;
      *(_QWORD *)(v10 + 208) = 0LL;
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    }
    *a3 = 1;
  }
  return 0LL;
}

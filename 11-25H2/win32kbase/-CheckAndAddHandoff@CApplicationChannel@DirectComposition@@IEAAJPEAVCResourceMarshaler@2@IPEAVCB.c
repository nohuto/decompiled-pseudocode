/*
 * XREFs of ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x1401116BC
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x140111488 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x140023F00 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x140231050 (-GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CheckAndAddHandoff(
        union _SLIST_HEADER *this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4,
        struct DirectComposition::CAnimationBinding *a5)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  DirectComposition::CAnimationMarshaler *v17; // rdi
  _DWORD v18[10]; // [rsp+20h] [rbp-28h] BYREF
  bool v19; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v9 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9);
  v11 = v10;
  if ( v10 && *(_DWORD *)(v10 + 156) )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    v13 = 0LL;
    v18[0] = 0;
    if ( a5
      && (v14 = (***((__int64 (__fastcall ****)(_QWORD))a5 + 3))(*((_QWORD *)a5 + 3)), (v13 = v14) != 0)
      && (v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 184LL))(v14)) != 0 )
    {
      v18[0] = *(_DWORD *)(v15 + 72);
    }
    else
    {
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _DWORD *))(*(_QWORD *)a2 + 312LL))(
        a2,
        a3,
        v18);
      if ( !v13 )
      {
LABEL_14:
        *(_DWORD *)(v11 + 176) = v18[0];
        return v8;
      }
    }
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13);
    v17 = (DirectComposition::CAnimationMarshaler *)v16;
    if ( v16 )
    {
      if ( *(_QWORD *)(v11 + 168) || (*(_DWORD *)(v11 + 32) & 0x1000) != 0 || v16 == v11 )
        return (unsigned int)-1073741811;
      *(_QWORD *)(v11 + 168) = v16;
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(v16 + 16));
      v19 = 0;
      DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
        v17,
        &v19,
        (__int64 *)(v11 + 184),
        (unsigned __int64 *)(v11 + 192));
      *(_BYTE *)(v11 + 200) = v19 | *(_BYTE *)(v11 + 200) & 0xFE;
      *((_DWORD *)v17 + 8) |= 0x1000u;
    }
    goto LABEL_14;
  }
  return v8;
}

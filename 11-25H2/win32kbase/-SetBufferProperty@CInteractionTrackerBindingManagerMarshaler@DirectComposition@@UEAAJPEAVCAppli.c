/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1401236D0
 * Callers:
 *     <none>
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140050C4C (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int v9; // r15d
  struct DirectComposition::CResourceMarshaler *v10; // rax
  __int128 v11; // rdi
  struct DirectComposition::CResourceMarshaler *v12; // rax
  int v13; // r9d
  unsigned int v14; // edx
  int v15; // r8d
  unsigned __int64 v16; // r10
  size_t v17; // r13
  __int64 *v18; // rcx
  __int64 v19; // rax
  int v20; // r11d
  __int64 v21; // rax
  __int128 v22; // xmm0
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v24; // rax
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v25; // rax
  int v26; // ecx
  __int128 Src; // [rsp+20h] [rbp-20h] BYREF
  __int64 v29; // [rsp+30h] [rbp-10h]

  v6 = 0;
  *a6 = 0;
  if ( a3 || a5 != 12 )
    return (unsigned int)-1073741811;
  v9 = a4[2];
  *(_QWORD *)&Src = *(_QWORD *)a4;
  v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, Src);
  if ( v10 )
    *(_QWORD *)&v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 160LL))(v10);
  else
    *(_QWORD *)&v11 = 0LL;
  v12 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, SDWORD1(Src));
  if ( v12 )
    *((_QWORD *)&v11 + 1) = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v12 + 160LL))(v12);
  else
    *((_QWORD *)&v11 + 1) = 0LL;
  if ( (_QWORD)v11 && *((_QWORD *)&v11 + 1) && (_QWORD)v11 != *((_QWORD *)&v11 + 1) )
  {
    v13 = *(_DWORD *)(v11 + 32);
    v14 = 0;
    v15 = *(_DWORD *)(*((_QWORD *)&v11 + 1) + 32LL);
    v16 = *((_QWORD *)this + 12);
    while ( 1 )
    {
      if ( v14 >= v16 )
      {
        if ( !v9 )
          return 3221225485LL;
        v24 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v11 + 448);
        if ( v24 )
        {
          if ( v24 != this )
            return 3221225485LL;
        }
        v25 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(*((_QWORD *)&v11 + 1) + 448LL);
        if ( v25 )
        {
          if ( v25 != this )
            return 3221225485LL;
        }
        v26 = *(_DWORD *)(v11 + 64);
        *(_DWORD *)(v11 + 64) = v26 + 1;
        if ( v26 == -1 )
        {
          *(_DWORD *)(v11 + 64) = -1;
          return 3221225485LL;
        }
        if ( (*(_DWORD *)(*((_QWORD *)&v11 + 1) + 64LL))++ == -1 )
        {
          --*(_DWORD *)(v11 + 64);
          --*(_DWORD *)(*((_QWORD *)&v11 + 1) + 64LL);
          return 3221225485LL;
        }
        v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
               (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 72),
               1LL,
               0x73694344u);
        if ( (v6 & 0x80000000) == 0 )
        {
          Src = v11;
          v29 = v9;
          DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v11);
          DirectComposition::CResourceMarshaler::AddRef(*((DirectComposition::CResourceMarshaler **)&v11 + 1));
          memmove(
            (void *)(*((_QWORD *)this + 9) + *((_QWORD *)this + 13) * (*((_QWORD *)this + 12) - 1LL)),
            &Src,
            *((_QWORD *)this + 13));
          *(_QWORD *)(v11 + 448) = this;
          *(_QWORD *)(*((_QWORD *)&v11 + 1) + 448LL) = this;
          goto LABEL_18;
        }
        --*(_DWORD *)(v11 + 64);
        --*(_DWORD *)(*((_QWORD *)&v11 + 1) + 64LL);
        return v6;
      }
      v17 = *((_QWORD *)this + 13);
      v18 = (__int64 *)(*((_QWORD *)this + 9) + v14 * v17);
      v19 = *v18;
      v29 = v18[2];
      v20 = *(_DWORD *)(v19 + 32);
      v21 = v18[1];
      if ( v20 == v13 && *(_DWORD *)(v21 + 32) == v15 )
        break;
      if ( v20 == v15 && *(_DWORD *)(v21 + 32) == v13 )
        break;
      ++v14;
    }
    v22 = *(_OWORD *)v18;
    v29 = v18[2];
    Src = v22;
    if ( (_DWORD)v29 != v9 )
    {
      LODWORD(v29) = v9;
      memmove(v18, &Src, v17);
LABEL_18:
      *((_DWORD *)this + 4) |= 0x40u;
      *a6 = 1;
      return v6;
    }
    if ( !v9 )
      return 3221225485LL;
    return v6;
  }
  return 3221225485LL;
}

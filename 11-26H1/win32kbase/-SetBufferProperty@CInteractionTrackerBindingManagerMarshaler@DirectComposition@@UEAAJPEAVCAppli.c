/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140244310
 * Callers:
 *     <none>
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140122390 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::SetBufferProperty(
        __int64 a1,
        DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  unsigned int v9; // r15d
  struct DirectComposition::CResourceMarshaler *v10; // rax
  __int128 v11; // rdi
  struct DirectComposition::CResourceMarshaler *v12; // rax
  int v13; // r9d
  __int64 *v14; // r12
  int v15; // edx
  unsigned int v16; // ecx
  unsigned __int64 v17; // r11
  __int64 v18; // r10
  size_t v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ecx
  int v28; // [rsp+20h] [rbp-40h]
  __int128 Src; // [rsp+28h] [rbp-38h] BYREF
  __int64 v30; // [rsp+38h] [rbp-28h]
  size_t Size; // [rsp+40h] [rbp-20h]

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a5 == 12 )
  {
    v9 = *(_DWORD *)(a4 + 8);
    Size = *(_QWORD *)a4;
    v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, Size);
    if ( v10 )
      *(_QWORD *)&v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10
                                                                                                  + 152LL))(v10);
    else
      *(_QWORD *)&v11 = 0LL;
    v12 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, SHIDWORD(Size));
    if ( v12 )
      *((_QWORD *)&v11 + 1) = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v12 + 152LL))(v12);
    else
      *((_QWORD *)&v11 + 1) = 0LL;
    if ( !(_QWORD)v11 || !*((_QWORD *)&v11 + 1) || (_QWORD)v11 == *((_QWORD *)&v11 + 1) )
      return 3221225485LL;
    v13 = *(_DWORD *)(v11 + 32);
    v14 = (__int64 *)(a1 + 72);
    v15 = *(_DWORD *)(*((_QWORD *)&v11 + 1) + 32LL);
    v16 = 0;
    v17 = *(_QWORD *)(a1 + 96);
    while ( v16 < v17 )
    {
      v18 = *v14;
      Size = *(_QWORD *)(a1 + 104);
      v19 = v16 * Size;
      v20 = *(_QWORD *)(v19 + v18);
      v30 = *(_QWORD *)(v19 + v18 + 16);
      v28 = *(_DWORD *)(v20 + 32);
      v21 = *(_QWORD *)(v19 + v18 + 8);
      if ( v28 == v13 && *(_DWORD *)(v21 + 32) == v15 || v28 == v15 && *(_DWORD *)(v21 + 32) == v13 )
      {
        v22 = *(_OWORD *)(v19 + v18);
        v30 = *(_QWORD *)(v19 + v18 + 16);
        Src = v22;
        if ( (_DWORD)v30 != v9 )
        {
          LODWORD(v30) = v9;
          memmove((void *)(v19 + v18), &Src, Size);
LABEL_35:
          *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 16) & 0xFFFFFF5F | 0x80;
          *a6 = 1;
          return v6;
        }
        if ( v9 )
          return v6;
        return 3221225485LL;
      }
      ++v16;
    }
    if ( !v9 )
      return 3221225485LL;
    v24 = *(_QWORD *)(v11 + 72);
    if ( v24 )
    {
      if ( v24 != a1 )
        return 3221225485LL;
    }
    v25 = *(_QWORD *)(*((_QWORD *)&v11 + 1) + 72LL);
    if ( v25 )
    {
      if ( v25 != a1 )
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
           (DirectComposition::CDCompDynamicArrayBase *)(a1 + 72),
           1LL,
           0x73694344u);
    if ( (v6 & 0x80000000) == 0 )
    {
      Src = v11;
      v30 = v9;
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v11);
      DirectComposition::CResourceMarshaler::AddRef(*((DirectComposition::CResourceMarshaler **)&v11 + 1));
      memmove((void *)(*v14 + *(_QWORD *)(a1 + 104) * (*(_QWORD *)(a1 + 96) - 1LL)), &Src, *(_QWORD *)(a1 + 104));
      *(_QWORD *)(v11 + 72) = a1;
      *(_QWORD *)(*((_QWORD *)&v11 + 1) + 72LL) = a1;
      goto LABEL_35;
    }
    --*(_DWORD *)(v11 + 64);
    --*(_DWORD *)(*((_QWORD *)&v11 + 1) + 64LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}

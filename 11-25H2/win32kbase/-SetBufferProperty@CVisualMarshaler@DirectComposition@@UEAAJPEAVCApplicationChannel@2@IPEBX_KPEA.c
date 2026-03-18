/*
 * XREFs of ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140050700
 * Callers:
 *     ?SetBufferProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400F9CA0 (-SetBufferProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ?SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DE10 (-SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051528 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1400BFCBC (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14011D7E0 (-SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX.c)
 *     ?SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1402304A4 (-SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetBufferProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v17; // rcx
  struct DirectComposition::CResourceMarshaler *v18; // rax
  struct DirectComposition::CResourceMarshaler *v19; // r15
  char v20; // r13
  int v21; // eax
  int v22; // r12d
  __int64 (__fastcall *v23)(struct DirectComposition::CResourceMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, unsigned int *, unsigned __int64, _BYTE *); // rax
  int v24; // eax
  unsigned int v25; // ecx
  __int64 j; // rax
  __int64 v27; // rcx
  struct DirectComposition::CResourceMarshaler *v28; // rax
  char v29; // r13
  int v30; // eax
  __int64 (__fastcall *v31)(struct DirectComposition::CResourceMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, unsigned int *, unsigned __int64, _BYTE *); // rax
  int v32; // eax
  unsigned int v33; // ecx
  __int64 i; // rax
  __int64 v35; // rcx
  int v36; // r8d
  int v37; // r8d
  int v38; // r8d
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  unsigned int v42; // eax
  _BYTE v43[8]; // [rsp+40h] [rbp-10h] BYREF
  struct DirectComposition::CResourceMarshaler *v44; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0;
  v10 = a3 - 12;
  if ( !v10 )
  {
    v27 = *((_QWORD *)this + 17);
    if ( v27 )
    {
      v28 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 168LL))(v27);
      v44 = v28;
      v19 = v28;
      v29 = 0;
      if ( !v28 )
        goto LABEL_34;
      if ( *((_QWORD *)v28 + 3) == 1LL )
      {
LABEL_35:
        v31 = *(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, unsigned int *, unsigned __int64, _BYTE *))(*(_QWORD *)v19 + 272LL);
        v43[0] = 0;
        v22 = v31(v19, a2, 17LL, a4, a5, v43);
        if ( v22 >= 0 )
        {
          if ( v43[0] )
          {
            v32 = *((_DWORD *)v19 + 4);
            if ( (v32 & 2) == 0 )
            {
              if ( (v32 & 1) != 0 )
              {
                v33 = *((_DWORD *)v19 + 9);
                for ( i = v33; (unsigned int)i < 0xC0; LODWORD(i) = dword_140274520[i] )
                {
                  if ( (_DWORD)i == 157 )
                  {
                    v35 = 456LL;
                    goto LABEL_54;
                  }
                }
                while ( 1 )
                {
                  if ( v33 >= 0xC0 )
                  {
                    v35 = 440LL;
                    goto LABEL_54;
                  }
                  if ( v33 == 28 )
                    break;
                  v33 = dword_140274520[v33];
                }
                v35 = 472LL;
LABEL_54:
                *((_QWORD *)v19 + 1) = *(_QWORD *)((char *)a2 + v35);
                *(_QWORD *)((char *)a2 + v35) = v19;
              }
              *((_DWORD *)v19 + 4) |= 2u;
              *((_BYTE *)a2 + 264) |= 1u;
            }
          }
        }
        if ( !v29 )
          return (unsigned int)v22;
        if ( v22 >= 0 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(
            a2,
            *((struct DirectComposition::CResourceMarshaler **)this + 17));
          *((_DWORD *)this + 4) |= 0x100u;
          *((_QWORD *)this + 17) = v19;
          *a6 = 1;
          return (unsigned int)v22;
        }
        goto LABEL_70;
      }
    }
    v44 = 0LL;
LABEL_34:
    v29 = 1;
    v30 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0x6Du, &v44);
    v19 = v44;
    v22 = v30;
    if ( v30 < 0 )
      goto LABEL_70;
    goto LABEL_35;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v17 = *((_QWORD *)this + 20);
    if ( v17 )
    {
      v18 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 176LL))(v17);
      v44 = v18;
      v19 = v18;
      v20 = 0;
      if ( !v18 )
        goto LABEL_21;
      if ( *((_QWORD *)v18 + 3) == 1LL )
        goto LABEL_22;
    }
    v44 = 0LL;
LABEL_21:
    v20 = 1;
    v21 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0x7Eu, &v44);
    v19 = v44;
    v22 = v21;
    if ( v21 >= 0 )
    {
LABEL_22:
      v23 = *(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, unsigned int *, unsigned __int64, _BYTE *))(*(_QWORD *)v19 + 272LL);
      v43[0] = 0;
      v22 = v23(v19, a2, 17LL, a4, a5, v43);
      if ( v22 >= 0 )
      {
        if ( v43[0] )
        {
          v24 = *((_DWORD *)v19 + 4);
          if ( (v24 & 2) == 0 )
          {
            if ( (v24 & 1) != 0 )
            {
              v25 = *((_DWORD *)v19 + 9);
              for ( j = v25; (unsigned int)j < 0xC0; LODWORD(j) = dword_140274520[j] )
              {
                if ( (_DWORD)j == 157 )
                {
                  v15 = 456LL;
                  goto LABEL_12;
                }
              }
              while ( 1 )
              {
                if ( v25 >= 0xC0 )
                {
                  v15 = 440LL;
                  goto LABEL_12;
                }
                if ( v25 == 28 )
                  break;
                v25 = dword_140274520[v25];
              }
              v15 = 472LL;
LABEL_12:
              *((_QWORD *)v19 + 1) = *(_QWORD *)((char *)a2 + v15);
              *(_QWORD *)((char *)a2 + v15) = v19;
            }
            *((_DWORD *)v19 + 4) |= 2u;
            *((_BYTE *)a2 + 264) |= 1u;
          }
        }
      }
      if ( !v20 )
        return (unsigned int)v22;
      if ( v22 >= 0 )
        (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, bool *))(*(_QWORD *)this + 280LL))(
          this,
          a2,
          7LL,
          v19,
          a6);
    }
LABEL_70:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v19);
    return (unsigned int)v22;
  }
  v12 = v11 - 2;
  if ( !v12 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetHeatMapColorHelper(this, a2, a4, a5, a6);
  v13 = v12 - 13;
  if ( !v13 )
  {
    if ( a5 == 12 )
    {
      *((_DWORD *)this + 18) = *a4;
      *((_DWORD *)this + 19) = a4[1];
      *((_DWORD *)this + 20) = a4[2];
      if ( *((_QWORD *)this + 5) )
      {
        DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 1u);
        DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 2u);
        DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 3u);
      }
      *((_DWORD *)this + 4) |= 0x80u;
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a5 == 8 )
    {
      *((_DWORD *)this + 21) = *a4;
      *((_DWORD *)this + 22) = a4[1];
      if ( *((_QWORD *)this + 5) )
      {
        DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x18u);
        DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x19u);
      }
      *((_DWORD *)this + 4) |= 0x200000u;
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  v36 = v14 - 1;
  if ( !v36 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetRelativeOffsetHelper(this, a2, a4, a5, a6);
  v37 = v36 - 1;
  if ( !v37 )
  {
    if ( a5 == 8 )
    {
      *((_DWORD *)this + 26) = *a4;
      *((_DWORD *)this + 27) = a4[1];
      if ( *((_QWORD *)this + 5) )
      {
        DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x23u);
        DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x24u);
      }
      *((_DWORD *)this + 4) |= 0x2000000u;
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  v38 = v37 - 14;
  if ( v38 )
  {
    if ( v38 != 5 || a5 != 16 )
      return (unsigned int)-1073741811;
    v40 = *(_QWORD *)a4 - *((_QWORD *)this + 30);
    if ( *(_QWORD *)a4 == *((_QWORD *)this + 30) )
      v40 = *((_QWORD *)a4 + 1) - *((_QWORD *)this + 31);
    if ( v40 )
    {
      *((_OWORD *)this + 15) = *(_OWORD *)a4;
      *((_DWORD *)this + 90) |= 8u;
LABEL_10:
      *a6 = 1;
    }
  }
  else
  {
    if ( a5 != 12 )
      return (unsigned int)-1073741811;
    v41 = *(_QWORD *)a4 - *((_QWORD *)this + 15);
    if ( *(_QWORD *)a4 == *((_QWORD *)this + 15) )
      v41 = a4[2] - (unsigned __int64)*((unsigned int *)this + 32);
    if ( v41 )
    {
      *((_QWORD *)this + 15) = *(_QWORD *)a4;
      v42 = a4[2];
      *((_DWORD *)this + 4) |= 0x20000000u;
      *((_DWORD *)this + 32) = v42;
      goto LABEL_10;
    }
  }
  return v6;
}

/*
 * XREFs of ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1402ABAA0
 * Callers:
 *     DxgkAugmentCdsj @ 0x1401D4530 (DxgkAugmentCdsj.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x140192610 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x14026A6F0 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x14026AF50 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z @ 0x14026B6AC (-_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402AC310 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14033D124 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x14037F438 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x140422A50 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x140428D48 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140429994 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Augment(CDS_JOURNAL *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  unsigned __int16 i; // ax
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  _QWORD *v8; // rsi
  struct DXGADAPTER *v9; // r8
  __int64 v10; // rax
  unsigned __int16 j; // ax
  unsigned __int16 v12; // ax
  int Active; // eax
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // dx
  int v16; // eax
  int Persisted; // eax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // dx
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rdx
  struct DXGADAPTER *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rax
  unsigned __int16 v27[8]; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int16 v31; // [rsp+60h] [rbp-A0h]
  __int128 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int16 v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  int v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+94h] [rbp-6Ch]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int16 v43; // [rsp+D0h] [rbp-30h]
  __int128 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  char v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]
  int v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+104h] [rbp+4h]
  __int64 v51; // [rsp+110h] [rbp+10h]
  _DWORD v52[9]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v53; // [rsp+144h] [rbp+44h]
  __int128 v54; // [rsp+14Ch] [rbp+4Ch]
  __int128 v55; // [rsp+15Ch] [rbp+5Ch]
  __int64 v56; // [rsp+16Ch] [rbp+6Ch]
  int v57; // [rsp+174h] [rbp+74h]

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2);
  v40 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v47 = 1;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v48 = 0;
  v49 = 1;
  v50 = 0LL;
  v51 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v40, 8u);
  CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)&v40);
  for ( i = 0; ; i = v27[0] + 1 )
  {
    while ( 1 )
    {
      v27[0] = i + 1;
      v5 = CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v40, i + 1);
      if ( v5 < v27[0] )
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 1596;
LABEL_5:
        v6 = -1073741801;
        goto LABEL_6;
      }
      Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v40, 0, 0, 0, v27);
      v6 = Active;
      if ( Active >= 0 )
        break;
      if ( Active != -1073741789 )
      {
        WdLogSingleEntry4(2LL, Active, &v40, v46, a2);
        WdLogGlobalForLineNumber = 1635;
        goto LABEL_6;
      }
      i = v27[0];
    }
    if ( !a2 )
      goto LABEL_7;
    if ( v46 )
    {
      v14 = *(_WORD *)(v46 + 20);
      v15 = *(_WORD *)(v46 + 22);
    }
    else
    {
      v14 = 0;
      v15 = 0;
    }
    if ( v14 < v15 )
      break;
  }
  v16 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology((struct CCD_TOPOLOGY *)&v40, a2, 1);
  v6 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry4(2LL, v16, &v40, v46, a2);
    WdLogGlobalForLineNumber = 1652;
    goto LABEL_6;
  }
LABEL_7:
  if ( *((_DWORD *)a2 + 4) == -1 )
  {
    v6 = -1071774974;
    goto LABEL_6;
  }
  v8 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v8 != v8 && *(_DWORD *)this == 1 )
  {
    v6 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)&v40, this);
    if ( v6 == -1073741266 )
    {
      WdLogSingleEntry3(3LL, this, &v40, v46);
      WdLogGlobalForLineNumber = 489;
      v6 = CDS_JOURNAL::Purge(this);
    }
  }
  v10 = v46;
  *(_OWORD *)this = *(_OWORD *)v46;
  *((_DWORD *)this + 4) = *(_DWORD *)(v10 + 16);
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    v22 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      goto LABEL_51;
    v23 = (struct DXGADAPTER *)*((unsigned int *)a2 + 4);
    do
    {
      v24 = (__int64)v22;
      if ( *((_DWORD *)v22 + 8) == (_DWORD)v23
        && *((_DWORD *)v22 + 5) == *((_DWORD *)a2 + 1)
        && *((_DWORD *)v22 + 6) == *((_DWORD *)a2 + 2) )
      {
        break;
      }
      v22 = (_QWORD *)*v22;
    }
    while ( v22 != v8 );
    if ( v22 == v8 )
    {
LABEL_51:
      v25 = operator new(0x58uLL, 0x63644356u, 256LL);
      v24 = v25;
      if ( !v25 )
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 565;
        goto LABEL_5;
      }
      *(_OWORD *)v25 = 0LL;
      *(_OWORD *)(v25 + 20) = 0LL;
      *(_QWORD *)(v25 + 36) = 0LL;
      *(_OWORD *)(v25 + 44) = 0LL;
      *(_OWORD *)(v25 + 60) = 0LL;
      *(_QWORD *)(v25 + 76) = 0LL;
      *(_DWORD *)(v25 + 84) = 0;
      v26 = (__int64 *)*((_QWORD *)this + 4);
      if ( (_QWORD *)*v26 != v8 )
        __fastfail(3u);
      *(_QWORD *)v24 = v8;
      *(_QWORD *)(v24 + 8) = v26;
      *v26 = v24;
      *((_QWORD *)this + 4) = v24;
    }
    CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v24, a2, v23);
    goto LABEL_6;
  }
  v53 = 0LL;
  v56 = 0LL;
  v57 = 0;
  *(_OWORD *)v52 = 0LL;
  *(_OWORD *)&v52[5] = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v52, a2, v9);
  v28 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  LOBYTE(v35) = 1;
  v36 = 0;
  v37 = 1;
  v38 = 0LL;
  v39 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v28, 8u);
  CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)&v28);
  for ( j = 0; ; j = v27[0] + 1 )
  {
    while ( 1 )
    {
      v27[0] = j + 1;
      v12 = CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v28, j + 1);
      if ( v12 < v27[0] )
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 1596;
        v6 = -1073741801;
        goto LABEL_16;
      }
      Persisted = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v28, 0xFu, v27);
      v6 = Persisted;
      if ( Persisted >= 0 )
        break;
      if ( Persisted != -1073741789 )
      {
        WdLogSingleEntry4(2LL, Persisted, &v28, v34, a2);
        WdLogGlobalForLineNumber = 1635;
        goto LABEL_16;
      }
      j = v27[0];
    }
    if ( v34 )
    {
      v18 = *(_WORD *)(v34 + 20);
      v19 = *(_WORD *)(v34 + 22);
    }
    else
    {
      v18 = 0;
      v19 = 0;
    }
    if ( v18 < v19 )
      break;
  }
  v20 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v52, (struct CCD_TOPOLOGY *)&v28);
  v6 = v20;
  if ( v20 >= 0 )
  {
    CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)&v28);
    v21 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)&v28, 1u);
    v6 = v21;
    if ( v21 >= 0 )
    {
      v6 = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v52);
    }
    else
    {
      WdLogSingleEntry3(2LL, v21, &v28, v34);
      WdLogGlobalForLineNumber = 533;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, v20, &v28, v34);
    WdLogGlobalForLineNumber = 519;
  }
LABEL_16:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v28);
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v40);
  return v6;
}

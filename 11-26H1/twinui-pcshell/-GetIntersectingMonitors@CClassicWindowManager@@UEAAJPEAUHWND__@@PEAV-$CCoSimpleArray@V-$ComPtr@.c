/*
 * XREFs of ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180048E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180049DB8 (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x180049EB8 (_lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_--operator().c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18004A13C (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ??$_Add@$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K@Z @ 0x18012AAF4 (--$_Add@$$QEAV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIImmersiv.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1801E7C24 (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors(__int64 a1, __int64 a2, LPVOID *a3)
{
  _QWORD *v4; // rsi
  CClassicWindowManager *v5; // r15
  __int64 v6; // rdi
  DWORD CurrentThreadId; // ebx
  APTTYPEQUALIFIER ApartmentType; // r14d
  int v9; // r13d
  unsigned __int64 v10; // r15
  unsigned __int64 i; // rdi
  LPVOID **v12; // rbx
  int v13; // esi
  __int64 v14; // rcx
  bool v15; // zf
  __int64 *v16; // rcx
  void *v17; // rax
  LPVOID **v18; // rsi
  LPVOID ***v19; // rax
  LPVOID **v20; // rbx
  LPVOID *v21; // r15
  __int64 v22; // rbx
  unsigned __int64 j; // rdi
  int (__fastcall ***v24)(_QWORD, GUID *, LPVOID ***); // rcx
  int v25; // r12d
  char v26; // di
  LPVOID *v27; // rbx
  unsigned __int64 v28; // r8
  LPVOID v29; // rdi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  char v34; // bl
  unsigned __int64 v35; // r12
  _QWORD *v36; // r14
  __int64 *v37; // rsi
  __int64 v38; // r13
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 **v41; // rax
  __int64 *v42; // rbx
  __int64 v43; // rax
  __int64 **v44; // rax
  __int64 *v45; // r15
  __int64 *v46; // rcx
  char v47; // al
  unsigned __int64 v48; // r12
  char *v49; // rax
  char *v50; // r15
  unsigned __int64 v51; // rax
  unsigned __int64 *v52; // rdx
  unsigned __int64 v53; // rcx
  LPVOID **v54; // rcx
  LPVOID ***v55; // rax
  LPVOID **v56; // rdi
  LPVOID **v57; // rcx
  __int64 (__fastcall ***v58)(_QWORD, GUID *, LPVOID ***); // rcx
  LPVOID ***v59; // rax
  LPVOID **v60; // rbx
  LPVOID *v61; // rcx
  unsigned __int64 v62; // rbx
  LPVOID **v63; // rcx
  __int64 v65; // rdi
  __int64 (__fastcall *v66)(__int64, __int64, GUID *, GUID *, _QWORD **); // rbx
  LPVOID **p_p_pv; // [rsp+30h] [rbp-A9h] BYREF
  LPVOID **v68; // [rsp+38h] [rbp-A1h] BYREF
  unsigned __int64 v69; // [rsp+40h] [rbp-99h] BYREF
  int v70; // [rsp+48h] [rbp-91h]
  LPVOID **v71; // [rsp+50h] [rbp-89h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-81h] BYREF
  void *v73; // [rsp+60h] [rbp-79h]
  void *v74; // [rsp+68h] [rbp-71h]
  void *v75; // [rsp+70h] [rbp-69h]
  LPVOID *p_pv; // [rsp+78h] [rbp-61h] BYREF
  LPVOID **v77; // [rsp+80h] [rbp-59h]
  __int64 v78; // [rsp+88h] [rbp-51h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-49h]
  __int128 v80; // [rsp+A0h] [rbp-39h]
  _QWORD *v81; // [rsp+B0h] [rbp-29h]
  __int64 v82; // [rsp+C0h] [rbp-19h]
  APTTYPEQUALIFIER v83; // [rsp+C8h] [rbp-11h]
  char v84[96]; // [rsp+D0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]
  _QWORD *v86; // [rsp+140h] [rbp+67h] BYREF
  _QWORD *pAptType; // [rsp+148h] [rbp+6Fh] BYREF
  LPVOID *v88; // [rsp+150h] [rbp+77h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+158h] [rbp+7Fh] BYREF

  v88 = a3;
  v86 = (_QWORD *)a1;
  v4 = (_QWORD *)a1;
  v70 = 0;
  v5 = (CClassicWindowManager *)(a1 - 72);
  v78 = a1 - 72;
  v6 = (a1 + 64) & -(__int64)(a1 != 72);
  lpCriticalSection = (LPCRITICAL_SECTION)v6;
  v82 = v6;
  if ( !(unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(v6 + 0x2C)) || *(_DWORD *)(v6 + 40) == -3 )
    goto LABEL_13;
  CurrentThreadId = 0;
  LODWORD(pAptType) = 0;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
  pAptQualifier = ApartmentType;
  if ( ApartmentType < APTTYPEQUALIFIER_NONE )
    goto LABEL_9;
  if ( !(_DWORD)pAptType )
  {
LABEL_8:
    CurrentThreadId = GetCurrentThreadId();
    goto LABEL_10;
  }
  if ( (_DWORD)pAptType != 1 )
  {
    if ( (_DWORD)pAptType == 2 )
    {
      CurrentThreadId = -1;
      goto LABEL_10;
    }
    if ( (_DWORD)pAptType == 3 )
      goto LABEL_8;
LABEL_9:
    if ( ApartmentType < APTTYPEQUALIFIER_NONE )
      goto LABEL_129;
  }
LABEL_10:
  if ( CurrentThreadId != *(_DWORD *)(v6 + 40) )
    ApartmentType = -2147417842;
  pAptQualifier = ApartmentType;
LABEL_129:
  if ( ApartmentType >= APTTYPEQUALIFIER_NONE )
  {
LABEL_13:
    ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v6) ? 0x8001010E : APTTYPEQUALIFIER_NONE;
    pAptQualifier = ApartmentType;
    goto LABEL_14;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentType);
LABEL_14:
  v83 = ApartmentType;
  v68 = 0LL;
  v9 = 0;
  LODWORD(pAptType) = 0;
  if ( a2 )
  {
    v68 = 0LL;
    v77 = 0LL;
    v10 = 0LL;
    for ( i = 0LL; i < v4[16]; ++i )
    {
      p_pv = 0LL;
      v12 = *(LPVOID ***)(v4[15] + 8 * i);
      p_p_pv = v12;
      if ( v12 )
        ((void (__fastcall *)(LPVOID **))(*v12)[1])(v12);
      pAptType = 0LL;
      if ( ((int (__fastcall *)(LPVOID **, GUID *, _QWORD **))**v12)(
             v12,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &pAptType) >= 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*pAptType + 192LL))(pAptType, a2) )
      {
        v13 = 0;
      }
      else
      {
        v13 = -1;
      }
      v14 = (__int64)pAptType;
      if ( pAptType )
      {
        pAptType = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      ((void (__fastcall *)(LPVOID **))(*v12)[2])(v12);
      v15 = v13 == 0;
      v4 = v86;
      if ( v15 )
      {
        v10 = i;
        v9 = 0;
        goto LABEL_28;
      }
    }
    v9 = -2147319765;
LABEL_28:
    LODWORD(pAptType) = v9;
    if ( v9 >= 0 )
    {
      v58 = *(__int64 (__fastcall ****)(_QWORD, GUID *, LPVOID ***))(v4[15] + 8 * v10);
      v9 = (**v58)(v58, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v68);
      LODWORD(pAptType) = v9;
    }
    v5 = (CClassicWindowManager *)(v4 - 9);
  }
  else
  {
    v59 = (LPVOID ***)v4[15];
    v60 = *v59;
    if ( *v59 )
    {
      ((void (__fastcall *)(LPVOID **))(*v60)[1])(*v59);
      v68 = v60;
    }
  }
  v16 = 0LL;
  pv = 0LL;
  v17 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  if ( v9 >= 0 )
  {
    v18 = v68;
    p_pv = &pv;
    if ( v68 )
      ((void (__fastcall *)(LPVOID **))(*v68)[1])(v68);
    v19 = (LPVOID ***)((__int64 (__fastcall *)(LPVOID **))(*v18)[12])(v18);
    v20 = *v19;
    if ( *v19 )
      ((void (__fastcall *)(LPVOID **))(*v20)[1])(*v19);
    while ( v20 )
    {
      if ( v18 != v20 )
      {
        ((void (__fastcall *)(LPVOID **))(*v20)[1])(v20);
        v54 = v18;
        v18 = v20;
        if ( v54 )
          ((void (__fastcall *)(LPVOID **))(*v54)[2])(v54);
      }
      v55 = (LPVOID ***)((__int64 (__fastcall *)(LPVOID **))(*v20)[12])(v20);
      v56 = *v55;
      if ( v20 != *v55 )
      {
        if ( v56 )
          ((void (__fastcall *)(LPVOID **))(*v56)[1])(*v55);
        v57 = v20;
        v20 = v56;
        ((void (__fastcall *)(LPVOID **))(*v57)[2])(v57);
      }
    }
    v77 = v18;
    v69 = 0LL;
    if ( ((int (__fastcall *)(LPVOID **, unsigned __int64 *))(*v18)[10])(v18, &v69) < 0 )
    {
      v22 = (__int64)v86;
LABEL_52:
      v26 = 0;
    }
    else
    {
      v21 = p_pv;
      v22 = v69;
      if ( v69 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v69 + 8LL))(v69);
      v70 = 1;
      for ( j = 0LL; j < (unsigned __int64)v21[1]; ++j )
      {
        v24 = (int (__fastcall ***)(_QWORD, GUID *, LPVOID ***))*((_QWORD *)*v21 + j);
        if ( v24 && v22 )
        {
          if ( v24 == (int (__fastcall ***)(_QWORD, GUID *, LPVOID ***))v22 )
            goto LABEL_52;
          p_p_pv = 0LL;
          v71 = 0LL;
          if ( (**v24)(v24, &GUID_00000000_0000_0000_c000_000000000046, &p_p_pv) >= 0 )
          {
            v25 = (**(__int64 (__fastcall ***)(__int64, GUID *, LPVOID ***))v22)(
                    v22,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    &v71);
            if ( v25 >= 0 )
              ((void (__fastcall *)(LPVOID **))(*v71)[2])(v71);
            ((void (__fastcall *)(LPVOID **))(*p_p_pv)[2])(p_p_pv);
            if ( v25 >= 0 && p_p_pv == v71 )
              goto LABEL_52;
          }
        }
      }
      v26 = 1;
    }
    if ( (v70 & 1) != 0 && v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( !v26 )
      goto LABEL_61;
    v27 = p_pv;
    v28 = (unsigned __int64)p_pv[3];
    v29 = p_pv[1];
    if ( v29 == (LPVOID)v28 )
    {
      v30 = (unsigned __int64)v29 + 1;
      if ( v30 > 0xFFFFFFFE )
      {
LABEL_61:
        v32 = v69;
        if ( v69 )
        {
          v69 = 0LL;
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        if ( ((unsigned __int8 (__fastcall *)(LPVOID **))(*v18)[16])(v18) )
        {
          v71 = v18;
          p_p_pv = &p_pv;
          v33 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
                  v84,
                  v78,
                  &v71,
                  &p_p_pv);
          v80 = *(_OWORD *)v33;
          v81 = *(_QWORD **)(v33 + 16);
          v34 = 1;
          v69 = v86[16];
          v35 = 0LL;
          if ( v69 )
          {
            v36 = v81;
            v37 = (__int64 *)*((_QWORD *)&v80 + 1);
            v38 = (__int64)v86;
            do
            {
              if ( !v34 )
                break;
              v39 = *(_QWORD *)(*(_QWORD *)(v38 + 120) + 8 * v35);
              v78 = v39;
              if ( v39 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
              v40 = *v37;
              v86 = (_QWORD *)*v37;
              v41 = (__int64 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 96LL))(v39);
              v42 = *v41;
              if ( *v41 )
                (*(void (__fastcall **)(__int64 *))(*v42 + 8))(*v41);
              while ( v42 && (__int64 *)v39 != v42 )
              {
                v43 = *v42;
                if ( v42 == (__int64 *)v40 )
                {
                  (*(void (__fastcall **)(__int64 *))(v43 + 16))(v42);
                  v47 = 1;
                  goto LABEL_83;
                }
                v44 = (__int64 **)(*(__int64 (__fastcall **)(__int64 *))(v43 + 96))(v42);
                v45 = *v44;
                if ( v42 != *v44 )
                {
                  if ( v45 )
                    (*(void (__fastcall **)(__int64 *))(*v45 + 8))(*v44);
                  v46 = v42;
                  v42 = v45;
                  (*(void (__fastcall **)(__int64 *))(*v46 + 16))(v46);
                }
                v40 = (__int64)v86;
              }
              if ( v42 )
                (*(void (__fastcall **)(__int64 *))(*v42 + 16))(v42);
              v47 = 0;
LABEL_83:
              if ( v47 )
                v34 = lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(*v36, &v78);
              else
                v34 = 1;
              if ( v39 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              ++v35;
            }
            while ( v35 < v69 );
            v18 = v77;
            ApartmentType = pAptQualifier;
            v9 = (int)pAptType;
          }
        }
        ((void (__fastcall *)(LPVOID **))(*v18)[2])(v18);
        goto LABEL_118;
      }
      if ( v30 > v28 )
      {
        p_p_pv = 0LL;
        v31 = 2 * v28;
        if ( !is_mul_ok(v28, 2uLL) )
          goto LABEL_61;
        if ( v28 > 0x1000 )
          v31 = v28 + 4096;
        if ( v30 <= v31 )
        {
          v30 = v31;
          if ( v31 > 0xFFFFFFFE )
            v30 = 4294967294LL;
        }
        p_p_pv = 0LL;
        v48 = 8 * v30;
        if ( !is_mul_ok(v30, 8uLL) )
          goto LABEL_61;
        v49 = (char *)CoTaskMemRealloc(*p_pv, 8 * v30);
        v50 = v49;
        if ( !v49 )
          goto LABEL_61;
        v51 = CTCoAllocPolicy::_CoTaskMemSize(v49);
        if ( v51 > v48 )
          memset_0(&v50[v48], 0, v51 - v48);
        v27[3] = (LPVOID)v30;
        *v27 = v50;
      }
    }
    v27[1] = (char *)v27[1] + 1;
    v52 = (unsigned __int64 *)((char *)*v27 + 8 * ((__int64)v27[1] - 1));
    if ( v52 )
    {
      v53 = v69;
      *v52 = v69;
      if ( v53 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v53 + 8LL))(v53);
    }
    goto LABEL_61;
  }
  if ( v9 == -2147319765 )
  {
    v9 = CClassicWindowManager::_EnsureMonitorManager(v5);
    if ( v9 >= 0 )
    {
      v86 = 0LL;
      v65 = v4[25];
      v66 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v65 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
      v9 = v66(v65, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v86);
      if ( v9 >= 0 )
      {
        pAptType = v86;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pAptType);
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_Add<Microsoft::WRL::ComPtr<IImmersiveMonitor> &&>(
          &pv,
          &pAptType);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pAptType);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v86);
      if ( v9 >= 0 )
      {
LABEL_118:
        v61 = v88;
        *v88 = pv;
        v61[2] = v74;
        v61[1] = v73;
        v61[3] = v75;
        v16 = 0LL;
        pv = 0LL;
        v74 = 0LL;
        v17 = 0LL;
        v73 = 0LL;
        v75 = 0LL;
        goto LABEL_119;
      }
    }
    v17 = v73;
    v16 = (__int64 *)pv;
  }
LABEL_119:
  if ( v16 )
  {
    v62 = 0LL;
    if ( v17 )
    {
      do
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16[v62++]);
        v16 = (__int64 *)pv;
      }
      while ( v62 < (unsigned __int64)v73 );
    }
    CoTaskMemFree(v16);
    pv = 0LL;
  }
  v73 = 0LL;
  v75 = 0LL;
  v63 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    ((void (__fastcall *)(LPVOID **))(*v63)[2])(v63);
  }
  if ( ApartmentType >= APTTYPEQUALIFIER_NONE )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}

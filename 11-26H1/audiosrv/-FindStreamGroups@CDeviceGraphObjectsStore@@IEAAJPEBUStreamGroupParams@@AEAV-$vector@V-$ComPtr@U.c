/*
 * XREFs of ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180045C10
 * Callers:
 *     ?FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180101530 (-FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ??$emplace_back@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV234@@Z @ 0x180100B78 (--$emplace_back@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIStreamGro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroups(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 *v7; // rdi
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r14
  __int64 v9; // rbx
  int v10; // eax
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rsi
  int v12; // eax
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // rsi
  unsigned __int16 *v18; // r14
  __int64 v19; // rsi
  const void *v20; // rax
  int v21; // eax
  char v22; // si
  char v23; // si
  char v24; // si
  int v25; // eax
  unsigned int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-48h] BYREF
  int v47; // [rsp+30h] [rbp-40h] BYREF
  __int64 v48; // [rsp+38h] [rbp-38h] BYREF
  __int64 v49; // [rsp+40h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+48h] [rbp-28h]
  _BYTE v51[16]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v5 = a1;
  v49 = a1;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v50 = v6;
  v7 = *(__int64 **)(v5 + 72);
  v8 = 0LL;
  while ( v7 != *(__int64 **)(v5 + 80) )
  {
    v9 = *v7;
    v48 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v46 = 0LL;
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL))(
              v9,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              (__int64 *)&v46);
      v8 = v46;
    }
    else
    {
      v10 = 0;
    }
    if ( v10 >= 0 && v8 )
    {
      v45 = 0LL;
      v11 = **v8;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v45);
      v12 = v11(v8, &GUID_167ec254_274a_42dd_9502_0526983dab9f, &v45);
      v8 = 0LL;
      if ( v12 < 0 )
        goto LABEL_39;
      v13 = *(_QWORD *)(a2 + 24);
      if ( v13 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 128LL))(v45) )
        goto LABEL_39;
      v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v45 + 136LL))(v45, v51);
      v15 = *(_QWORD *)(a2 + 32) - *v14;
      if ( !v15 )
        v15 = *(_QWORD *)(a2 + 40) - v14[1];
      if ( v15
        || (v16 = *(_DWORD *)(a2 + 8), v16 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v45 + 192LL))(v45)) )
      {
LABEL_39:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v45);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v46);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v48);
        goto LABEL_38;
      }
      v17 = *(_QWORD *)(a2 + 16);
      if ( *(_WORD *)(v17 + 16) == *(_WORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 144LL))(v45) + 16) )
      {
        v18 = *(unsigned __int16 **)(a2 + 16);
        v19 = v18[8];
        v20 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 144LL))(v45);
        v21 = memcmp_0(v18, v20, v19 + 18);
        v8 = 0LL;
        if ( v21 )
        {
          v31 = v45;
          if ( v45 )
          {
            v45 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          v32 = (__int64)v46;
          if ( v46 )
          {
            v46 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
        else
        {
          v22 = *(_BYTE *)(a2 + 49);
          if ( v22 == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 168LL))(v45) )
          {
            v23 = *(_BYTE *)(a2 + 48);
            if ( v23 == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 184LL))(v45) )
            {
              v24 = *(_BYTE *)(a2 + 50);
              if ( v24 == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 264LL))(v45) )
              {
                v47 = 0;
                v25 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v45 + 440LL))(v45, a2 + 56, &v47);
                v26 = v25;
                if ( v25 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x6F,
                    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                    (const char *)(unsigned int)v25);
                  v35 = v45;
                  if ( v45 )
                  {
                    v45 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                  }
                  v36 = (__int64)v46;
                  if ( v46 )
                  {
                    v46 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
                  }
                  if ( v9 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                  if ( v6 )
                    LeaveCriticalSection(v6);
                  return v26;
                }
                if ( v47 )
                {
                  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
                    a3,
                    &v45);
                  v27 = v45;
                  if ( v45 )
                  {
                    v45 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
                  }
                  v28 = (__int64)v46;
                  if ( v46 )
                  {
                    v46 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                  }
                }
                else
                {
                  v33 = v45;
                  if ( v45 )
                  {
                    v45 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                  }
                  v34 = (__int64)v46;
                  if ( v46 )
                  {
                    v46 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                  }
                }
              }
              else
              {
                v41 = v45;
                if ( v45 )
                {
                  v45 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
                }
                v42 = (__int64)v46;
                if ( v46 )
                {
                  v46 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
                }
              }
            }
            else
            {
              v37 = v45;
              if ( v45 )
              {
                v45 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
              }
              v38 = (__int64)v46;
              if ( v46 )
              {
                v46 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
              }
            }
          }
          else
          {
            v39 = v45;
            if ( v45 )
            {
              v45 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            }
            v40 = (__int64)v46;
            if ( v46 )
            {
              v46 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
            }
          }
        }
      }
      else
      {
        v43 = v45;
        if ( v45 )
        {
          v45 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        }
        v44 = (__int64)v46;
        if ( v46 )
        {
          v46 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    else
    {
      if ( v8 )
      {
        v46 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
      }
      v8 = 0LL;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_38:
    ++v7;
    v5 = v49;
  }
  v29 = -2147023728;
  if ( *a3 != a3[1] )
    v29 = 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  return v29;
}

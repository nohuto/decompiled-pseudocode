/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180042CC4
 * Callers:
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180042AE0 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x180042C30 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1801017E0 (-FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180101820 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x180101860 (-FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 **v5; // r15
  __int64 v6; // rdi
  __int64 *i; // rdi
  __int64 v8; // rbx
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // r14
  int v10; // eax
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h]
  __int64 v25; // [rsp+38h] [rbp-10h]
  int v26; // [rsp+90h] [rbp+48h]
  int (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+58h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+60h] BYREF

  v5 = (__int64 **)(a1 + 96);
  *a3 = 0LL;
  v6 = a1 + 32;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v25 = v6;
  v26 = 1;
  do
  {
    if ( *a3 )
      break;
    for ( i = *v5; i != v5[1]; ++i )
    {
      v8 = *i;
      v22 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v27 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v27);
      v9 = 0LL;
      v27 = 0LL;
      if ( v8 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
                v8,
                &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                (__int64 *)&v27);
        v9 = v27;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 >= 0 && v9 )
      {
        v28 = 0LL;
        v11 = **v9;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
        if ( v11(v9, &GUID_a5096cff_6966_4f5c_875e_69b6b31705b3, &v28) < 0 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v27);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
          continue;
        }
        v23 = v28;
        v12 = a2[7];
        if ( !v12 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          JUMPOUT(0x180042F3DLL);
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 16LL))(v12, &v23) )
        {
          v13 = v28;
          v28 = 0LL;
          *a3 = v13;
          v14 = (__int64)v27;
          if ( v27 )
          {
            v27 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          break;
        }
        v20 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        v21 = (__int64)v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
      else if ( v9 )
      {
        v27 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v15 = v26++;
    v5 += 3;
  }
  while ( v15 < 5 );
  v16 = *a3 == 0 ? 0x887C001A : 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v17 = (__int64 *)a2[7];
  if ( v17 )
  {
    v18 = *v17;
    LOBYTE(v18) = v17 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v17 + 32))(v17, v18);
    a2[7] = 0LL;
  }
  return v16;
}

/*
 * XREFs of ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioStreamPolicyVolumeClient@@@Z @ 0x18002C070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
        CWindowsPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2)
{
  int v4; // r13d
  int v5; // esi
  int v6; // r15d
  unsigned int v7; // r12d
  int (__fastcall *v8)(struct IAudioStreamPolicyVolumeClient *, void (__fastcall ****)(__int64, GUID *, __int64 **)); // rax
  unsigned int v9; // ebx
  void (__fastcall **v10)(__int64, GUID *, __int64 **); // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // r8
  signed __int32 v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 *v21; // [rsp+20h] [rbp-10h] BYREF
  void (__fastcall ***v22)(__int64, GUID *, __int64 **); // [rsp+28h] [rbp-8h] BYREF
  int v23; // [rsp+78h] [rbp+48h]
  int v24; // [rsp+80h] [rbp+50h]
  __int64 v25; // [rsp+88h] [rbp+58h] BYREF

  v23 = 0;
  v24 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 56LL))(a2);
  v8 = *(int (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, void (__fastcall ****)(__int64, GUID *, __int64 **)))(*(_QWORD *)a2 + 24LL);
  v22 = 0LL;
  v9 = 1;
  if ( v8(a2, &v22) < 0 )
    goto LABEL_22;
  v10 = *v22;
  v21 = 0LL;
  (*v10)((__int64)v22, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4, &v21);
  v11 = *v21;
  v25 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 24))(v21, &v25);
  v14 = (volatile signed __int32 *)v25;
  if ( v12 >= 0 )
  {
    v23 = *(_DWORD *)(v25 + 460);
    v24 = *(_DWORD *)(v25 + 444);
    v4 = *(_DWORD *)(v25 + 464);
    v5 = *(_DWORD *)(*(_QWORD *)(v25 + 224) + 208LL) & 0x20;
  }
  if ( (*((_BYTE *)this + 52) & 3) == 3 )
    goto LABEL_11;
  if ( (*((_BYTE *)this + 52) & 1) != 0 )
  {
    if ( !(*(unsigned int (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, __int64, __int64))(*(_QWORD *)a2 + 72LL))(
            a2,
            v13,
            v25) )
    {
LABEL_10:
      v14 = (volatile signed __int32 *)v25;
LABEL_11:
      v6 = 1;
      goto LABEL_12;
    }
    v14 = (volatile signed __int32 *)v25;
  }
  if ( (*((_BYTE *)this + 52) & 2) == 0 )
    goto LABEL_12;
  if ( (*(unsigned int (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, __int64, volatile signed __int32 *))(*(_QWORD *)a2 + 72LL))(
         a2,
         v13,
         v14) == 1 )
    goto LABEL_10;
  v14 = (volatile signed __int32 *)v25;
LABEL_12:
  if ( v14 )
  {
    do
      v15 = *((_DWORD *)v14 + 5);
    while ( v15 != 0x7FFFFFFF && v15 != _InterlockedCompareExchange(v14 + 5, v15 - 1, v15) );
    if ( v15 == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 560LL))(v14, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
          Microsoft::WRL::Details::ModuleBase::module_,
          v16,
          v17,
          v18);
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
LABEL_22:
  if ( v7 <= 0x13 && (v19 = 933936, _bittest(&v19, v7)) || v23 || v24 || v4 || v5 || v6 )
    v9 = 0;
  if ( v22 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 **)))(*v22)[2])(v22);
  return v9;
}

/*
 * XREFs of ?ForEachInitializedApoInterface@CCompositeSystemEffect@@UEAAJ$$QEAV?$function@$$A6AJPEAUIAudioProcessingObject@@U_GUID@@I@Z@std@@@Z @ 0x18005C870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositeSystemEffect::ForEachInitializedApoInterface(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // r14
  __int64 i; // rdi
  int v7; // r8d
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebp
  _OWORD v14[3]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    v7 = *(_DWORD *)(a1 + 104);
    if ( v2 >= v7 )
      return 0LL;
    if ( i < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, a2);
      __debugbreak();
    }
    v8 = *(_OWORD *)(*(_QWORD *)(a1 + 96) + i);
    if ( v2 >= *(_DWORD *)(a1 + 120) )
      goto LABEL_12;
    v9 = *(_QWORD *)(a1 + 112);
    v16 = v7 - v2 - 1;
    v17 = *(_QWORD *)(v3 + v9);
    v10 = *(_QWORD *)(a2 + 56);
    v14[0] = v8;
    if ( !v10 )
    {
      std::_Xbad_function_call();
      __debugbreak();
LABEL_12:
      ATL::_AtlRaiseException(0xC000008C, a2);
      JUMPOUT(0x18005C95DLL);
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *, _OWORD *, int *))(*(_QWORD *)v10 + 16LL))(v10, &v17, v14, &v16);
    v12 = v11;
    if ( v11 < 0 )
      break;
    ++v2;
    v3 += 8LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x341,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}

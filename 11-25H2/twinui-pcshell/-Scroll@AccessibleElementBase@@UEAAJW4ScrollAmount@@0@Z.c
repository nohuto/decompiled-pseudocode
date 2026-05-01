/*
 * XREFs of ?Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z @ 0x1804BFC50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804C00EC (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::Scroll(
        AccessibleElementBase *this,
        enum ScrollAmount a2,
        enum ScrollAmount a3)
{
  AccessibleElementBase *v5; // rbx
  int Element; // ebx
  int v7; // edi
  void *v8; // rbx
  void (__fastcall *v9)(void *, __int64); // rdi
  __int64 v10; // rdx
  int v11; // esi
  __int64 v12; // rdx
  void *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  v5 = (AccessibleElementBase *)((char *)this - 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  Element = AccessibleElementBase::_GetElement(v5, &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423, &v14);
  if ( Element >= 0 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v14 + 96LL))(v14) )
    {
      if ( a3 && (v11 = a3 - 1) != 0 )
      {
        if ( (unsigned int)(v11 - 2) > 1 )
          goto LABEL_15;
        v12 = 2LL;
      }
      else
      {
        v12 = 1LL;
      }
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 32LL))(v14, v12);
      goto LABEL_15;
    }
    if ( a2 && (v7 = a2 - 1) != 0 )
    {
      if ( (unsigned int)(v7 - 2) > 1 )
      {
LABEL_15:
        Element = 0;
        goto LABEL_16;
      }
      v8 = v14;
      v9 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 32LL);
      v10 = 4 - (unsigned int)((unsigned int)Mirror_IsThreadRTL() != 0);
    }
    else
    {
      v8 = v14;
      v9 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 32LL);
      v10 = (unsigned int)((unsigned int)Mirror_IsThreadRTL() != 0) + 3;
    }
    v9(v8, v10);
    goto LABEL_15;
  }
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  return (unsigned int)Element;
}

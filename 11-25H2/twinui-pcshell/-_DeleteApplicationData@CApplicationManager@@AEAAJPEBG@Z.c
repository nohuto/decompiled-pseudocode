/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1802ECB00
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E6020 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E6200 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x180139C18 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18013A104 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_DeleteApplicationData(CApplicationManager *this, const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  LPCWCH v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v10 = 0LL;
  v4 = *((_QWORD *)this + 130);
  if ( v4
    && (v5 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
               v4,
               *((_DWORD *)this + 257),
               &v11),
        *(_DWORD *)v5 == 1) )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v10, (_QWORD *)(v5 + 16));
    v7 = v10;
    if ( *(_QWORD *)(v10 + 16) == 1LL )
    {
      if ( *(_QWORD *)(v10 + 16) )
      {
        v10 = **(_QWORD **)(v10 + 8);
        v8 = CApplicationManager::_DeleteApplicationData(this, a2, &v10);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 16LL))(v7);
        return v8;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20F5,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)0x80028CA1LL);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 16LL))(v7);
        return 2147650721LL;
      }
    }
    else
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
      return 2147942487LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20ED,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x8002802BLL);
    return 2147647531LL;
  }
}

/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801F1770
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180176B88 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     ?FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805BD2F0 (-FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewFilteredCollection::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        __int64 a4)
{
  char v7; // r14
  RTL_SRWLOCK *v8; // rbx
  __int64 i; // rdi
  int v10; // eax
  unsigned int v11; // edi
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h]

  v17 = a4;
  v7 = 0;
  v8 = (RTL_SRWLOCK *)(a1 + 168);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
  v16 = v8;
  for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
  {
    if ( SHIsSameObject(*(struct IUnknown **)(*(_QWORD *)(a1 + 64) + 8 * i), a2) )
    {
      v7 = 1;
      if ( a3 == 1 )
      {
        v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(
                (__int64 *)(a1 + 64),
                (unsigned int)i);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAA,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
            (const char *)(unsigned int)v10);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
          return v11;
        }
      }
      break;
    }
  }
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( !v7 )
    return 0LL;
  v13 = ApplicationViewFilteredCollection::FireApplicationViewChangeNotification(a1 - 16, a2, a3, v17);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
      (const char *)(unsigned int)v13);
  return v14;
}

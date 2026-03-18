/*
 * XREFs of ?PopAll@CSharedCircularQueue@@QEBAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180126D4C
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180126880 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 *     ?GetTipPoints@CGenericInkTipPointSource@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@PEAI11@Z @ 0x1801CA600 (-GetTipPoints@CGenericInkTipPointSource@@QEAAJIPEAV-$vector@EV-$allocator@E@std@@@std@@PEAI11@Z.c)
 *     ?ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z @ 0x18026C720 (-ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x180125F9C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CSharedCircularQueue::PopAll(
        unsigned int **a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5)
{
  __int64 result; // rax
  unsigned int v8; // r8d
  __int64 v9; // r9
  unsigned int v10; // r10d
  unsigned int *v11; // r12
  unsigned int v12; // r11d
  unsigned int v13; // edi
  unsigned int *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rbp
  unsigned int v17; // ebx
  unsigned int v18; // [rsp+20h] [rbp-28h] BYREF

  result = std::_Atomic_storage<unsigned int,4>::load(*a1 + 1);
  v10 = 0;
  *a4 = 0;
  *a5 = result;
  if ( (unsigned int)result > v8 )
  {
    v11 = (unsigned int *)a1 + 3;
    v12 = *((_DWORD *)a1 + 3);
    v13 = result - v8;
    v14 = &v18;
    v18 = *(_DWORD *)v9 / *((_DWORD *)a1 + 2);
    result = v18;
    v15 = v12;
    if ( v12 < v18 )
      v14 = (unsigned int *)a1 + 3;
    else
      v15 = v18;
    if ( v13 >= v15 )
      v13 = *v14;
    if ( v13 )
    {
      v16 = *(_QWORD *)(v9 + 8);
      do
      {
        v17 = *a5 - v10 - 1;
        memcpy_0(
          (void *)(v16 + v10 * *((_DWORD *)a1 + 2)),
          (char *)*a1 + *((_DWORD *)a1 + 2) * (v17 % v12) + 8,
          *((unsigned int *)a1 + 2));
        result = std::_Atomic_storage<unsigned int,4>::load(*a1);
        v12 = *v11;
        if ( (unsigned int)result > *v11 + v17 )
          break;
        v10 = ++*a4;
      }
      while ( *a4 < v13 );
    }
  }
  return result;
}

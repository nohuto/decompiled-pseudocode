/*
 * XREFs of ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1400244D8
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140023164 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140024790 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140024EA8 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResourceStateUpdateSerializer::Allocate(CResourceStateUpdateSerializer *this, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v5; // r9d
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  signed int v9; // edi
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 Pool2; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx

  v2 = *((_DWORD *)this + 2);
  v5 = v2 + *((_DWORD *)this + 15);
  if ( v5 < v2 )
  {
    *((_DWORD *)this + 2) = -1;
    return (unsigned int)-1073741675;
  }
  else
  {
    v6 = 0xFFFFFFFFLL;
    v7 = v5 + *((_DWORD *)this + 17);
    v8 = -1;
    if ( v7 >= v5 )
      v8 = v7;
    *((_DWORD *)this + 2) = v8;
    v9 = v7 < v5 ? 0xC0000095 : 0;
    if ( v7 >= v5 )
    {
      v10 = -1;
      v11 = v8 + *((_DWORD *)this + 14);
      if ( v11 >= v8 )
        v10 = v8 + *((_DWORD *)this + 14);
      v9 = v11 < v8 ? 0xC0000095 : 0;
      *((_DWORD *)this + 2) = v10;
      v8 = v10;
    }
    if ( v9 >= 0 )
    {
      v12 = -1;
      v13 = v8 + *((_DWORD *)this + 16);
      if ( v13 >= v8 )
        v12 = v8 + *((_DWORD *)this + 16);
      v9 = v13 < v8 ? 0xC0000095 : 0;
      *((_DWORD *)this + 2) = v12;
      if ( v13 >= v8 )
      {
        v14 = v12 + *((_DWORD *)this + 18);
        if ( v14 >= v12 )
          v6 = v14;
        v9 = v14 < v12 ? 0xC0000095 : 0;
        *((_DWORD *)this + 2) = v6;
        if ( v14 >= v12 )
        {
          if ( (_DWORD)v6 && (Pool2 = ExAllocatePool2(257LL, v6, a2), (*(_QWORD *)this = Pool2) == 0LL) )
          {
            return (unsigned int)-1073741801;
          }
          else
          {
            v16 = *((unsigned int *)this + 16);
            v17 = *(_QWORD *)this + *((unsigned int *)this + 15);
            *((_QWORD *)this + 3) = *(_QWORD *)this;
            v18 = v17 + *((unsigned int *)this + 17);
            *((_QWORD *)this + 5) = v17;
            v19 = v18 + *((unsigned int *)this + 14);
            *((_QWORD *)this + 2) = v18;
            *((_QWORD *)this + 4) = v19;
            *((_QWORD *)this + 6) = v19 + v16;
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}

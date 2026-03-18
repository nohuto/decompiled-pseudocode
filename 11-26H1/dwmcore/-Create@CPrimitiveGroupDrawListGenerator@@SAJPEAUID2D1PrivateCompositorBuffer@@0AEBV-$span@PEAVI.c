/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x1800190B8
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18009D220 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18027DC20 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18001936C (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x1800194B8 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x18007C790 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        struct ID2D1PrivateCompositorBuffer *a1,
        __int64 a2,
        _OWORD *a3,
        _OWORD *a4,
        _OWORD *a5,
        CPrimitiveGroupDrawListGenerator **a6)
{
  CPrimitiveGroupDrawListGenerator *v7; // rbx
  HANDLE ProcessHeap; // rax
  CCommandBuffer *v12; // rax
  CCommandBuffer *v13; // r15
  HANDLE v14; // rax
  CPrimitiveBuffer *v15; // rax
  CPrimitiveBuffer *v16; // r14
  int v17; // esi
  unsigned int v18; // eax
  void *v19; // rax
  unsigned int v20; // eax
  void *v21; // rdi
  unsigned int v22; // ebx
  const void *v23; // rax
  HANDLE v24; // rax
  CPrimitiveGroupDrawListGenerator *v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // edx

  v7 = 0LL;
  ProcessHeap = GetProcessHeap();
  v12 = (CCommandBuffer *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    *((_DWORD *)v12 + 2) = 0;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = GetProcessHeap();
  v15 = (CPrimitiveBuffer *)HeapAlloc(v14, 0, 0x10uLL);
  v16 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = 0LL;
    *((_DWORD *)v15 + 2) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v13 )
  {
    if ( v16 )
    {
      v17 = CCommandBuffer::Initialize(v13, a1);
      if ( v17 < 0 )
      {
        v26 = 164;
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
        *((_DWORD *)v16 + 2) = v18;
        v19 = operator new[](v18);
        *(_QWORD *)v16 = v19;
        if ( v19 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
          v21 = *(void **)v16;
          v22 = v20;
          v23 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
          memcpy_0(v21, v23, v22);
          v24 = GetProcessHeap();
          v25 = (CPrimitiveGroupDrawListGenerator *)HeapAlloc(v24, 0, 0x68uLL);
          v7 = v25;
          if ( v25 )
          {
            *((_DWORD *)v25 + 2) = 0;
            *((_QWORD *)v25 + 2) = v13;
            *(_QWORD *)v25 = &CPrimitiveGroupDrawListGenerator::`vftable';
            *((_QWORD *)v25 + 3) = v16;
            *((_OWORD *)v25 + 2) = *a3;
            *((_OWORD *)v25 + 3) = *a4;
            *((_OWORD *)v25 + 4) = *a5;
            *((_QWORD *)v25 + 10) = 0LL;
            *((_QWORD *)v25 + 11) = 0LL;
            *((_QWORD *)v25 + 12) = 0LL;
            ++dword_1803DE43C;
            (**(void (__fastcall ***)(LPVOID))v25)(v25);
            v17 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(v7);
            if ( v17 >= 0 )
            {
              *a6 = v7;
              return (unsigned int)v17;
            }
            v26 = 174;
          }
          else
          {
            v7 = 0LL;
            v17 = -2147024882;
            v26 = 173;
          }
        }
        else
        {
          v17 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x69u, 0LL);
          v26 = 166;
        }
      }
    }
    else
    {
      v17 = -2147024882;
      v26 = 162;
    }
  }
  else
  {
    v17 = -2147024882;
    v26 = 161;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v26, 0LL);
  if ( v16 )
    CPrimitiveBuffer::`scalar deleting destructor'(v16, v27);
  if ( v13 )
    CPrimitiveBuffer::`scalar deleting destructor'(v13, v27);
  if ( v7 )
    (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v7 + 8LL))(v7);
  return (unsigned int)v17;
}

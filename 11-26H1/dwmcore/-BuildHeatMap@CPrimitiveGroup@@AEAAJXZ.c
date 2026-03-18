/*
 * XREFs of ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x18027DA14
 * Callers:
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180094F18 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18009D190 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18018E608 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802A4CD4 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildHeatMap(CPrimitiveGroup *this)
{
  unsigned int v1; // esi
  unsigned int v3; // r14d
  _QWORD *v4; // r15
  int v5; // eax
  size_t v6; // rbx
  const void *v7; // rdi
  void *v8; // rax
  _QWORD *v9; // r12
  int v10; // eax
  size_t v11; // rbx
  const void *v12; // rdi
  void *v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx

  v1 = 0;
  v3 = 0;
  CPrimitiveGroup::ReleaseHeatMap(this);
  if ( *((_QWORD *)this + 41) && *((_QWORD *)this + 43) )
  {
    v4 = (_QWORD *)((char *)this + 432);
    v5 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 84), (struct ID2D1PrivateCompositorBuffer **)this + 54);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x46Du, 0LL);
    }
    else
    {
      v6 = *((_QWORD *)this + 42);
      v7 = (const void *)*((_QWORD *)this + 41);
      v8 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
      memcpy_0(v8, v7, v6);
      v9 = (_QWORD *)((char *)this + 440);
      v10 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 88), (struct ID2D1PrivateCompositorBuffer **)this + 55);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x472u, 0LL);
      }
      else
      {
        v11 = *((_QWORD *)this + 44);
        v12 = (const void *)*((_QWORD *)this + 43);
        v13 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 24LL))(*v9);
        memcpy_0(v13, v12, v11);
        v14 = 0;
        v15 = *((_QWORD *)this + 42);
        v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
        while ( v14 + 144 <= (unsigned int)v15 )
        {
          v17 = v14;
          v14 += 144;
          *(_DWORD *)(v17 + v16 + 8) = -1;
          *(_DWORD *)(v17 + v16 + 12) = 0;
          *(_DWORD *)(v17 + v16 + 40) = -1;
          *(_DWORD *)(v17 + v16 + 56) = -1;
        }
        v18 = *((_QWORD *)this + 44);
        v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 24LL))(*v9);
        while ( v1 + 148 <= (unsigned int)v18 )
        {
          v20 = v1;
          v1 += 148;
          *(_OWORD *)(v20 + v19 + 48) = *((_OWORD *)this + 26);
          *(_DWORD *)(v20 + v19 + 144) = -1;
        }
      }
    }
  }
  return v3;
}

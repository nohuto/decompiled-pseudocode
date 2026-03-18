/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x180112678
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x180112DE4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATION_INPUT_INFO *a1,
        struct CManipulationFrame **a2)
{
  int v2; // eax
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  void *v7; // rax
  struct CManipulationFrame *v8; // rax
  struct CManipulationFrame *v9; // rbx
  int v10; // ecx
  int v11; // edx
  unsigned int i; // r9d
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  unsigned int v19; // edi

  v2 = *((_DWORD *)a1 + 37);
  if ( !v2 || (v5 = 248LL * (unsigned int)(v2 - 1), v5 > 0xFFFFFFFF) || (v6 = v5 + 616, v6 < 0x268) )
    v6 = 0;
  v7 = DefaultHeap::AllocClear(v6);
  *a2 = 0LL;
  v8 = (struct CManipulationFrame *)memset_0(v7, 0, 0x268uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *((_DWORD *)a1 + 37);
    v11 = *((_DWORD *)a1 + 42);
    *((_DWORD *)v8 + 2) = 0;
    *(_QWORD *)v8 = &CManipulationFrame::`vftable';
    *((_DWORD *)v8 + 4) = v10;
    *((_DWORD *)v8 + 6) = v11;
    *((_OWORD *)v8 + 2) = *(_OWORD *)a1;
    *((_OWORD *)v8 + 3) = *((_OWORD *)a1 + 1);
    *((_OWORD *)v8 + 4) = *((_OWORD *)a1 + 2);
    *((_OWORD *)v8 + 5) = *((_OWORD *)a1 + 3);
    *((_OWORD *)v8 + 6) = *((_OWORD *)a1 + 4);
    *((_OWORD *)v8 + 7) = *((_OWORD *)a1 + 5);
    *((_OWORD *)v8 + 8) = *((_OWORD *)a1 + 6);
    *((_OWORD *)v8 + 9) = *((_OWORD *)a1 + 7);
    *((_OWORD *)v8 + 10) = *((_OWORD *)a1 + 8);
    ((void (__fastcall *)(struct CManipulationFrame *))CManipulationFrame::`vftable')(v8);
    for ( i = 0; i < *((_DWORD *)a1 + 37); *((_BYTE *)v9 + v14 + 608) &= ~1u )
    {
      v13 = i++;
      v14 = 248 * v13;
      v15 = 240 * v13;
      v16 = (_OWORD *)((char *)v9 + 248 * v13 + 368);
      v17 = (_OWORD *)((char *)a1 + 240 * v13 + 160);
      *v16 = *v17;
      v16[1] = v17[1];
      v16[2] = v17[2];
      v16[3] = v17[3];
      v16[4] = v17[4];
      v16[5] = v17[5];
      v16[6] = v17[6];
      v16 += 8;
      v18 = v17[7];
      v17 += 8;
      *(v16 - 1) = v18;
      *v16 = *v17;
      v16[1] = v17[1];
      v16[2] = v17[2];
      v16[3] = v17[3];
      v16[4] = v17[4];
      v16[5] = v17[5];
      v16[6] = v17[6];
      *(_QWORD *)((char *)v9 + v14 + 392) = *(unsigned int *)((char *)a1 + v15 + 352);
    }
    (**(void (__fastcall ***)(struct CManipulationFrame *))v9)(v9);
    *a2 = v9;
    v19 = 0;
    (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Cu, 0LL);
  }
  return v19;
}

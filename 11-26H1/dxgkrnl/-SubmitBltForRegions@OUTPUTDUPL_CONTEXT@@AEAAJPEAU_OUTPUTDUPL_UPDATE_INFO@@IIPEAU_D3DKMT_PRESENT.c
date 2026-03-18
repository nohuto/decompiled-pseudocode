/*
 * XREFs of ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402B3610
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402B27C4 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqppqq_EtwWriteTransfer @ 0x14005AFD0 (McTemplateK0pqppqq_EtwWriteTransfer.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402B3814 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        __int64 a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_RGNS *a5)
{
  struct _D3DKMT_PRESENT_RGNS *v5; // rbx
  __int64 v7; // r15
  __int64 v9; // r12
  UINT MoveRectCount; // edx
  unsigned int v11; // r13d
  const struct tagRECT *pDirtyRects; // rbp
  __int64 v13; // rax
  DXGCONTEXT **v14; // r10
  struct _D3DKMT_PRESENT_RGNS *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  DXGCONTEXT *v19; // rdx
  char *v20; // rax
  UINT v21; // esi
  struct tagRECT *Buffer; // rax
  struct tagRECT *i; // rdx
  __int64 v24; // rax
  struct DXGCONTEXT **v25; // [rsp+20h] [rbp-58h]
  struct tagRECT *v26; // [rsp+38h] [rbp-40h]
  struct COREDEVICEACCESS *v27; // [rsp+40h] [rbp-38h]

  v5 = a5;
  v7 = a4;
  v9 = (unsigned int)a3;
  if ( !a5 )
    return 0LL;
  MoveRectCount = a5->MoveRectCount;
  v11 = MoveRectCount + a5->DirtyRectCount;
  if ( MoveRectCount )
  {
    v21 = 16 * a5->DirtyRectCount;
    Buffer = (struct tagRECT *)AUTOEXPANDALLOCATION::GetBuffer(
                                 *((AUTOEXPANDALLOCATION **)a2 + 6),
                                 v21 + 16 * MoveRectCount,
                                 0);
    pDirtyRects = Buffer;
    if ( !Buffer )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1879;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to expand temp buffer for submitting presents.",
        1879LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    memmove(Buffer, v5->pDirtyRects, v21);
    a3 = 0LL;
    for ( i = (struct tagRECT *)&pDirtyRects[v5->DirtyRectCount]; (unsigned int)a3 < v5->MoveRectCount; ++i )
    {
      v24 = (unsigned int)a3;
      a3 = (unsigned int)(a3 + 1);
      *i = v5->pMoveRects[v24].DestRect;
    }
  }
  else
  {
    pDirtyRects = a5->pDirtyRects;
  }
  v13 = *((_QWORD *)a2 + 7);
  v14 = (DXGCONTEXT **)((char *)a2 + 8);
  a5 = 0LL;
  v15 = 0LL;
  if ( v13 )
  {
    v15 = *(struct _D3DKMT_PRESENT_RGNS **)(v13 + 1504);
  }
  else
  {
    v19 = *v14;
    if ( (*((_DWORD *)*v14 + 98) & 0x10) != 0 )
    {
      v20 = (char *)v19 + 400;
      v16 = *((_QWORD *)v19 + 50);
      if ( (char *)v16 != v20 )
        v15 = (struct _D3DKMT_PRESENT_RGNS *)v16;
      a5 = v15;
      v15 = (struct _D3DKMT_PRESENT_RGNS *)&a5;
      if ( *((_DWORD *)a2 + 8) )
      {
        v17 = -1073741811;
        goto LABEL_7;
      }
    }
  }
  v17 = DXGCONTEXT::Blt(
          *v14,
          v9,
          v7,
          *((_DWORD *)a2 + 8),
          *((struct DXGCONTEXT ***)a2 + 8),
          0LL,
          v11,
          pDirtyRects,
          0LL,
          (struct DXGHWQUEUE **)v15);
LABEL_7:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v27) = v17;
    LODWORD(v26) = v11;
    LODWORD(v25) = *((_DWORD *)this + 11);
    McTemplateK0pqppqq_EtwWriteTransfer((unsigned int)v25, v16, a3, this, v25, v9, v7, v26, v27);
  }
  return v17;
}

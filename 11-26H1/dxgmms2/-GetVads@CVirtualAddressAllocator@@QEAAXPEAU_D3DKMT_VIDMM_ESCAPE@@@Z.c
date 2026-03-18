/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1400AA548
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x14009DE94 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(struct _KTHREAD **this, struct _D3DKMT_VIDMM_ESCAPE *a2)
{
  D3DKMT_VAD_ESCAPE_COMMAND Command; // edx
  int v5; // edi
  __int32 v6; // edx
  __int32 v7; // edx
  struct _KTHREAD *v8; // rax
  struct _D3DKMT_VIDMM_ESCAPE *v9; // r15
  __int64 Value; // rcx
  _DWORD *v11; // r12
  UINT64 *p_IndexShift; // r14
  UINT NumPtes; // r9d
  __int64 v14; // r8
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rax
  int v17; // r13d
  __int64 v18; // rbp
  unsigned int i; // ecx
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned int v22; // r11d
  unsigned int v23; // r10d
  __int64 v24; // r11
  UINT v25; // ecx
  UINT j; // edx
  __int64 v27; // rax
  UINT v28; // r8d
  unsigned int v29; // r11d
  _OWORD *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  _QWORD **v33; // rsi
  _QWORD *k; // rax
  UINT64 NtHandle; // rcx
  _QWORD *v36; // r9
  __int64 PhysicalAdapterIndex; // rdx
  int v38; // r8d
  unsigned __int64 v39; // rcx
  _QWORD *m; // rdx
  _QWORD **v41; // rdx
  unsigned __int64 v42; // rax
  _QWORD *n; // rdx
  __int64 **v44; // rsi
  __int64 *ii; // rcx
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 v46; // eax
  HANDLE hProcess; // rax
  _QWORD **v48; // rsi
  _QWORD *jj; // rcx
  _BYTE v50[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v51; // [rsp+70h] [rbp+8h]

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v50, this + 8);
  Command = a2->GetVads.Command;
  v5 = 0;
  a2->GetVads.Status = 0;
  if ( Command )
  {
    v6 = Command - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v8 = this[12];
          v9 = a2 + 1;
          Value = a2->SetFault.Value;
          if ( (unsigned int)Value < *((_DWORD *)v8 + 1738) )
          {
            if ( a2->GetVads.GetPte.NumPtes <= 0x40 )
            {
              v51 = *(_QWORD *)(*((_QWORD *)v8 + 5040) + 8 * Value);
              v11 = *(_DWORD **)(v51 + 560);
              if ( a2->Evict.AllocationHandle < v11[4] )
              {
                p_IndexShift = &a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[0].IndexShift;
                memset(&a2->Defrag + 1, 0, 0x400uLL);
                NumPtes = a2->GetVads.GetPte.NumPtes;
                v14 = 0LL;
                v15 = a2->SetFault.Value;
                a2->GetVads.GetPte.NumPtes = 0;
                v16 = this[16];
                v17 = v11[4];
                v15 *= 32LL;
                v18 = *(_QWORD *)((char *)v16 + v15);
                for ( i = *(_DWORD *)((char *)v16 + v15 + 16);
                      v17;
                      i = *(_DWORD *)(v51 + 48LL * (unsigned int)(v20 - 1) + 208) )
                {
                  v20 = (unsigned int)--v17;
                  if ( !v18 || !(_DWORD)v20 && !v14 )
                    break;
                  v21 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v20);
                  v22 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v20);
                  if ( !(_DWORD)v20 && (*(_DWORD *)v14 & 0x40) != 0 )
                    v22 >>= 4;
                  if ( v22 >= i )
                  {
                    WdLogSingleEntry0(3LL);
                    WdLogGlobalForLineNumber = 3062;
                    break;
                  }
                  v23 = 0;
                  if ( (_DWORD)v20 == 1 && (*v11 & 0x80u) != 0 && a2->GetVads.GetPte.b64KBPte )
                    v23 = i;
                  if ( (_DWORD)v20 == a2->Evict.AllocationHandle )
                  {
                    v25 = i - v22;
                    if ( v25 < NumPtes )
                      NumPtes = v25;
                    if ( (_DWORD)v20 )
                    {
                      v28 = 0;
                      if ( NumPtes )
                      {
                        v29 = v23 + v22;
                        do
                        {
                          v30 = (_OWORD *)(*(_QWORD *)(v18 + 48) + 16LL * (v29 + v28));
                          *(_OWORD *)p_IndexShift = *v30;
                          if ( (_DWORD)v20 == 1 )
                          {
                            if ( (*v11 & 0x80u) != 0 )
                            {
                              v32 = -(__int64)(v23 != 0) & 0x80000;
                            }
                            else
                            {
                              v31 = *(_DWORD *)v30;
                              v32 = 0LL;
                              if ( (v31 & 0x60000) == 0x20000LL )
                                v32 = 0x80000LL;
                            }
                            *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | v32;
                          }
                          ++v28;
                          p_IndexShift += 2;
                        }
                        while ( v28 < NumPtes );
                      }
                      a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v18 + 4);
                    }
                    else
                    {
                      for ( j = 0; j < NumPtes; v9 = (struct _D3DKMT_VIDMM_ESCAPE *)((char *)v9 + 8) )
                      {
                        *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 16LL * (j + v22));
                        *p_IndexShift = ((unsigned __int64)(*(_BYTE *)v14 & 0x40) << 13) | *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL;
                        v27 = *(_QWORD *)(v14 + 48);
                        if ( v27 )
                        {
                          *(_QWORD *)&v9->Type = *(_QWORD *)(v27 + 16LL * (j + v22));
                          v9->GetVads.GetPte.Pte[29].Flags = *(_QWORD *)(*(_QWORD *)(v14 + 48) + 16LL * (j + v22) + 8);
                        }
                        ++j;
                        p_IndexShift += 2;
                      }
                      a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v14 + 4);
                      a2->GetVads.GetPte.b64KBPte = (*(_DWORD *)v14 & 0x40) != 0;
                    }
                    a2->GetVads.GetPte.NumPtes = NumPtes;
                    break;
                  }
                  v24 = *(_QWORD *)(v18 + 56);
                  if ( (_DWORD)v20 == 1 )
                    v14 = *(_QWORD *)(v24 + 8LL * ((unsigned int)v21 + v23));
                  else
                    v18 = *(_QWORD *)(v24 + 8 * v21);
                }
              }
              else
              {
                a2->GetVads.Status = -1073741811;
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 3035;
              }
            }
            else
            {
              a2->GetVads.Status = -1073741811;
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 3027;
            }
          }
          else
          {
            a2->GetVads.Status = -1073741811;
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 3021;
          }
        }
      }
      else
      {
        v33 = (_QWORD **)(this + 4);
        for ( k = *v33; k != v33; k = (_QWORD *)*k )
        {
          NtHandle = a2->EvictByNtHandle.NtHandle;
          v36 = k - 5;
          if ( NtHandle >= *(k - 2) && NtHandle < v36[4] )
          {
            PhysicalAdapterIndex = a2->GetVads.GetVadRange.PhysicalAdapterIndex;
            if ( (unsigned int)PhysicalAdapterIndex < ((*((_DWORD *)v36 + 18) >> 4) & 0x7Fu) )
            {
              v38 = 0;
              v39 = 0LL;
              for ( m = (_QWORD *)v36[3 * PhysicalAdapterIndex + 12]; m; m = (_QWORD *)*m )
                v39 = (unsigned __int64)m;
              while ( v39 )
              {
                if ( v38 == a2->GetVads.GetVadRange.VaRangeIndex )
                {
                  if ( v39 != 8 )
                  {
                    a2->GetVads.GetVadRange.StartAddress = *(_QWORD *)(v39 + 96);
                    a2->GetVads.GetVad.StartAddress = *(_QWORD *)(v39 + 104);
                    a2->GetVads.GetVadRange.OwnerType = *(_DWORD *)(v39 + 64) & 0xF;
                    a2->GetVads.GetVadRange.pOwner = *(_QWORD *)(v39 + 56);
                    a2->GetVads.GetVadRange.Protection = *(_DWORD *)(v39 + 88);
                    a2->GetVads.GetVad.EndAddress = *(_QWORD *)(v39 + 80);
                    a2->GetVads.GetVadRange.OwnerOffset = *(_QWORD *)(v39 + 72);
                    goto LABEL_85;
                  }
                  break;
                }
                v41 = *(_QWORD ***)(v39 + 8);
                ++v38;
                v42 = v39;
                if ( v41 )
                {
                  v39 = *(_QWORD *)(v39 + 8);
                  for ( n = *v41; n; n = (_QWORD *)*n )
                    v39 = (unsigned __int64)n;
                }
                else
                {
                  while ( 1 )
                  {
                    v39 = *(_QWORD *)(v39 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !v39 || *(_QWORD *)v39 == v42 )
                      break;
                    v42 = v39;
                  }
                }
              }
              a2->GetVads.Status = -1073741811;
              WdLogSingleEntry2(4LL, v36, a2->GetVads.GetVadRange.VaRangeIndex);
              WdLogGlobalForLineNumber = 3007;
            }
            else
            {
              a2->GetVads.Status = -1073741811;
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 2974;
            }
            break;
          }
        }
      }
    }
    else
    {
      v44 = (__int64 **)(this + 4);
      for ( ii = *v44; ii != (__int64 *)v44; ii = (__int64 *)*ii )
      {
        v46 = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a2->SetFault.Value;
        ++v5;
        if ( v46 == -1 )
        {
          hProcess = a2->Evict.hProcess;
          if ( (unsigned __int64)hProcess >= *(ii - 2) && (unsigned __int64)hProcess < *(ii - 1) )
          {
LABEL_77:
            a2->GetVads.GetVad.StartAddress = *(ii - 2);
            a2->GetVads.GetVad.EndAddress = *(ii - 1);
            a2->GetVads.GetVad.VadType = ii[4] & 0xF;
            a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)ii + 9);
            goto LABEL_85;
          }
        }
        else if ( v46 == v5 )
        {
          goto LABEL_77;
        }
      }
      a2->GetVads.Status = -1073741811;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2957;
    }
  }
  else
  {
    v48 = (_QWORD **)(this + 4);
    a2->SetFault.Value = 0;
    for ( jj = *v48; jj != v48; jj = (_QWORD *)*jj )
      a2->SetFault.Value = ++v5;
  }
LABEL_85:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
}

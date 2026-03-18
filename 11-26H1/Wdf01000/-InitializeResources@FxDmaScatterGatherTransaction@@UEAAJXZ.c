/*
 * XREFs of ?InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x140062000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqdid @ 0x14005BF20 (WPP_IFR_SF_qqdid.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::InitializeResources(FxDmaScatterGatherTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int64 m_TransactionLength; // r11
  _MDL *m_StartMdl; // r10
  unsigned __int64 m_MaxFragmentLength; // rdi
  unsigned __int64 m_StartOffset; // rdx
  unsigned __int64 ByteCount; // rax
  _MDL *v8; // rcx
  int v9; // r15d
  unsigned int v10; // r9d
  unsigned int v11; // r14d
  int i; // ebx
  int v13; // esi
  __int64 flags; // r9
  unsigned int level; // ebx
  unsigned __int16 v17; // ax
  const void *_a1; // r8
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned __int16 m_ObjectSize; // ax
  const void *v22; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  m_Globals = this->m_Globals;
  if ( this->m_RequireSingleTransfer )
    return 0LL;
  m_TransactionLength = this->m_TransactionLength;
  m_StartMdl = this->m_StartMdl;
  LODWORD(m_MaxFragmentLength) = 0;
  m_StartOffset = this->m_StartOffset;
  while ( 1 )
  {
    if ( !m_TransactionLength )
      return 0LL;
    ByteCount = m_StartMdl->ByteCount - m_StartOffset;
    if ( (unsigned int)m_MaxFragmentLength >= ByteCount )
    {
      m_StartOffset = (unsigned int)m_MaxFragmentLength;
      do
      {
        m_StartMdl = m_StartMdl->Next;
        m_StartOffset -= ByteCount;
        ByteCount = m_StartMdl->ByteCount;
      }
      while ( m_StartOffset >= ByteCount );
    }
    else
    {
      m_StartOffset += (unsigned int)m_MaxFragmentLength;
    }
    m_MaxFragmentLength = m_TransactionLength;
    v8 = m_StartMdl;
    if ( m_TransactionLength >= this->m_MaxFragmentLength )
      m_MaxFragmentLength = this->m_MaxFragmentLength;
    v9 = 0;
    v10 = m_StartMdl->ByteCount - m_StartOffset;
    v11 = v10;
    for ( i = ((_WORD)m_StartOffset + LOWORD(m_StartMdl->StartVa) + (unsigned __int16)m_StartMdl->ByteOffset) & 0xFFF;
          v10 < (unsigned int)m_MaxFragmentLength;
          v9 += v20 >> 12 )
    {
      v8 = v8->Next;
      if ( !v8 )
        break;
      v19 = v11 + 4095;
      v11 = v8->ByteCount;
      v20 = i + v19;
      v10 += v11;
      i = v8->ByteOffset;
    }
    if ( v10 + 4096 < (int)m_MaxFragmentLength + i )
      break;
    v13 = m_MaxFragmentLength - v10;
    flags = this->m_DmaEnabler->m_MaxSGElements;
    level = v9 + ((v11 + v13 + i + 4095) >> 12);
    if ( level > (unsigned int)flags )
    {
      m_ObjectSize = this->m_ObjectSize;
      v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v22 = 0LL;
      WPP_IFR_SF_qqdid(m_Globals, flags, (unsigned int)v22, 0xDu, traceGuid, v22, m_StartMdl, level, flags);
      return 3223323146LL;
    }
    m_TransactionLength -= m_MaxFragmentLength;
  }
  v17 = this->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v17 )
    _a1 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, _a1, -1073741789);
  FxVerifierDbgBreakPoint(m_Globals);
  return 3221225507LL;
}

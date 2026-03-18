/*
 * XREFs of ?EmitApplicationIdCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400DE098
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401981B0 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitApplicationIdCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2)
{
  _WORD *v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((char *)this + 264) < 0 )
  {
    v4 = (_WORD *)*((_QWORD *)this + 340);
    v5 = 0;
    if ( v4 )
    {
      v6 = 151LL;
      do
      {
        if ( !*v4 )
          break;
        ++v4;
        --v6;
      }
      while ( v6 );
      if ( v6 )
        v5 = 2 * ((151 - v6) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64)) + 2;
    }
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, (v5 + 15) & 0xFFFFFFFC, &v8) )
    {
      v7 = v8;
      *(_DWORD *)v8 = (v5 + 15) & 0xFFFFFFFC;
      v7[1] = 41;
      v7[2] = v5;
      if ( v5 )
        memmove(v7 + 3, *((const void **)this + 340), v5);
      *((_BYTE *)this + 264) &= ~0x80u;
    }
  }
  return (unsigned __int8)~*((_BYTE *)this + 264) >> 7;
}

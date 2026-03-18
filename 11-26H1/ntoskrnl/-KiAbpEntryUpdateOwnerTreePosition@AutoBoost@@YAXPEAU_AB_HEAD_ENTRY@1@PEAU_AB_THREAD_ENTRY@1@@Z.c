/*
 * XREFs of ?KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140377390
 * Callers:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 */

void __fastcall AutoBoost::KiAbpEntryUpdateOwnerTreePosition(
        AutoBoost *this,
        struct AutoBoost::_AB_HEAD_ENTRY *a2,
        struct AutoBoost::_AB_THREAD_ENTRY *a3)
{
  __int64 v3; // rbx
  int v6; // edi
  unsigned int v7; // edi
  int v8; // ecx
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r8d
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = 0LL;
  v6 = 0;
  if ( (*((_DWORD *)a2 + 10) & 0x3FFFFFFF) != 0 )
  {
    _BitScanReverse(&v7, *((_DWORD *)a2 + 10) & 0x3FFFFFFF);
    v6 = v7 + 1;
  }
  v8 = *(char *)(*((_QWORD *)a2 - 6 * (*((_BYTE *)a2 + 36) & 0x7F) - 2) + 563LL);
  if ( v8 > v6 )
  {
    LOBYTE(v6) = 30;
    if ( v8 < 30 )
      LOBYTE(v6) = *(_BYTE *)(*((_QWORD *)a2 - 6 * (*((_BYTE *)a2 + 36) & 0x7F) - 2) + 563LL);
  }
  if ( *((_BYTE *)a2 + 37) != (_BYTE)v6 )
  {
    v9 = (unsigned __int64)this + 40;
    RtlRbRemoveNode(v9, (char *)a2 + 8);
    *((_BYTE *)a2 + 37) = v6;
    v10 = *(_QWORD *)(v9 + 8);
    v11 = *(_QWORD *)v9;
    if ( (v10 & 1) != 0 )
    {
      if ( !v11 )
      {
LABEL_24:
        v13 = 0;
LABEL_18:
        RtlRbInsertNodeEx(v9, v3, v13, (char *)a2 + 8);
        return;
      }
      v11 ^= v9;
    }
    v3 = v11;
    v12 = v10 & 1;
    v13 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        while ( (char)v6 - *(char *)(v3 + 29) < 0 )
        {
          v14 = *(_QWORD *)v3;
          if ( v12 )
          {
            if ( !v14 )
              goto LABEL_24;
            v14 ^= v3;
          }
          if ( !v14 )
            goto LABEL_24;
          v3 = v14;
        }
        v15 = *(_QWORD *)(v3 + 8);
        if ( v12 )
        {
          if ( !v15 )
            break;
          v15 ^= v3;
        }
        if ( !v15 )
          break;
        v3 = v15;
      }
      v13 = 1;
    }
    goto LABEL_18;
  }
}

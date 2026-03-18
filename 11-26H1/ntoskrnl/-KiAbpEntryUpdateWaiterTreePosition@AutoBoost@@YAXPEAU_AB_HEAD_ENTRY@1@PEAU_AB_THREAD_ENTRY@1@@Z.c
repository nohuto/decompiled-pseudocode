/*
 * XREFs of ?KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140375128
 * Callers:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 */

void __fastcall AutoBoost::KiAbpEntryUpdateWaiterTreePosition(
        AutoBoost *this,
        struct AutoBoost::_AB_HEAD_ENTRY *a2,
        struct AutoBoost::_AB_THREAD_ENTRY *a3)
{
  char v4; // di
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax

  v4 = *(_BYTE *)(*((_QWORD *)a2 - 6 * (*((_BYTE *)a2 + 36) & 0x7F) - 2) + 195LL);
  if ( v4 > 30 )
    v4 = 30;
  if ( *((_BYTE *)a2 + 37) != v4 )
  {
    v5 = (unsigned __int64)this + 56;
    RtlRbRemoveNode((char *)this + 56, (char *)a2 + 8);
    *((_BYTE *)a2 + 37) = v4;
    v6 = 0LL;
    v7 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
    {
      if ( v7 )
        v7 ^= v5;
      else
        v7 = 0LL;
    }
    if ( v7 )
    {
      while ( 1 )
      {
        if ( *(char *)(v7 + 29) - v4 >= 0 )
        {
          v8 = *(_QWORD *)(v7 + 8);
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_14;
            v8 ^= v7;
          }
          if ( !v8 )
          {
LABEL_14:
            LOBYTE(v6) = 1;
            break;
          }
        }
        else
        {
          v8 = *(_QWORD *)v7;
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              break;
            v8 ^= v7;
          }
          if ( !v8 )
            break;
        }
        v7 = v8;
      }
    }
    RtlRbInsertNodeEx(v5, v7, v6, (char *)a2 + 8);
  }
}

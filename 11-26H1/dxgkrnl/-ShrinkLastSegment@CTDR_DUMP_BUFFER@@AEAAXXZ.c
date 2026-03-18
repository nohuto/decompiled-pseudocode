/*
 * XREFs of ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x14038A6D0
 * Callers:
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x140193360 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1401D82F4 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D8D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140389910 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTDR_DUMP_BUFFER::ShrinkLastSegment(CTDR_DUMP_BUFFER *this)
{
  __int16 v1; // ax
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r10
  _DWORD *v5; // rdx
  __int64 v6; // r8
  bool v7; // zf
  int v8; // r8d

  v1 = *((_WORD *)this + 10);
  if ( v1 )
  {
    v2 = *((_QWORD *)this + 1);
    v3 = *(unsigned int *)(v2 + 8LL * (unsigned __int16)(v1 - 1) + 8);
    v4 = v3 + v2;
    v5 = (_DWORD *)((char *)this + 24);
    if ( !v4 || *v5 == (_DWORD)v3 )
      goto LABEL_10;
    v6 = (unsigned int)(*v5 - v3 - 1);
    if ( *v5 - (_DWORD)v3 != 1 )
    {
      do
      {
        if ( *(_BYTE *)(v6 + v4) )
          break;
        v7 = (_DWORD)v6 == 1;
        v6 = (unsigned int)(v6 - 1);
      }
      while ( !v7 );
    }
    v8 = *(_BYTE *)(v6 + v4) != 0 ? v6 + 1 : 0;
    if ( !v8 )
LABEL_10:
      v8 = 1;
    *v5 = v8 + v3;
  }
}

/*
 * XREFs of ??1?$CSimplePointerArray@UContextMenuRenderingData@@VCTContainer_PolicyNewMem@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@QEAA@XZ @ 0x1804C1134
 * Callers:
 *     ??1?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@QEAA@XZ @ 0x1804C1184 (--1-$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V-$CSimpleArrayStandardCompareHelper@P.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804C1B74 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18008C828 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x1804C1190 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 */

void __fastcall CSimplePointerArray<ContextMenuRenderingData,CTContainer_PolicyNewMem,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>>::~CSimplePointerArray<ContextMenuRenderingData,CTContainer_PolicyNewMem,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>>(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned __int64 i; // rdi
  ContextMenuRenderingData *v4; // rcx

  for ( i = 0LL; i < a1[1]; ++i )
  {
    v4 = *(ContextMenuRenderingData **)(*a1 + 8 * i);
    if ( v4 )
      ContextMenuRenderingData::`scalar deleting destructor'(v4, a2);
  }
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)a1);
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)a1);
}

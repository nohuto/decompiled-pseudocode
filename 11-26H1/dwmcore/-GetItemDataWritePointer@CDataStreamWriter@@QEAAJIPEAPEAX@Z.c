/*
 * XREFs of ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x180188B98
 * Callers:
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x1801174E0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::GetItemDataWritePointer(CDataStreamWriter *this, unsigned int a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // eax

  if ( (*((_QWORD *)this + 6) || *((_DWORD *)this + 14))
    && a2
    && (v6 = *((_QWORD *)this + 4), v7 = *(unsigned int *)(v6 + 20), *(_DWORD *)(v6 + 16) - (int)v7 >= a2) )
  {
    v8 = -2147024362;
    *a3 = (void *)(v7 + v6 + 24);
    v9 = v7 + a2;
    v10 = -1;
    if ( (unsigned int)v7 + a2 >= (unsigned int)v7 )
      v10 = v7 + a2;
    v11 = v9 < (unsigned int)v7 ? 0x80070216 : 0;
    *(_DWORD *)(v6 + 20) = v10;
    if ( v9 < (unsigned int)v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x247u, 0LL);
      v8 = v11;
      if ( v11 < 0 )
        goto LABEL_9;
    }
    else
    {
      v12 = *((_DWORD *)this + 11);
      if ( v12 + a2 < v12 )
      {
        *((_DWORD *)this + 11) = -1;
        v11 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x248u, 0LL);
LABEL_9:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xD8u, 0LL);
        return v8;
      }
      *((_DWORD *)this + 11) = v12 + a2;
      v8 = 0;
    }
    *((_DWORD *)this + 14) += a2;
  }
  else
  {
    v8 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0xD1u, 0LL);
  }
  return v8;
}

/*
 * XREFs of FONTOBJ_pvTrueTypeFontFile @ 0x140309E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1401EC3DC (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x14030F828 (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 */

PVOID __stdcall FONTOBJ_pvTrueTypeFontFile(FONTOBJ *pfo, ULONG *pcjFile)
{
  char *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *TrueTypeFile; // rax
  ULONG v7; // eax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG v10; // [rsp+40h] [rbp+8h] BYREF
  FONTOBJ *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v11 = pfo;
  *pcjFile = 0;
  if ( pfo )
  {
    v10 = 0;
    v4 = *(_QWORD *)&pfo[2].iUniq;
    if ( v4
      && (v5 = *(_QWORD *)(v4 + 88)) != 0
      && (v9[0] = *(_QWORD *)&pfo[2].iUniq,
          TrueTypeFile = (const char *)PFFOBJ::GetTrueTypeFile((PFFOBJ *)v9, v5, &v10),
          (v2 = (char *)TrueTypeFile) != 0LL)
      && (v2 = RFONTOBJ::pchTranslate((RFONTOBJ *)&v11, TrueTypeFile)) != 0LL )
    {
      v7 = v10;
    }
    else
    {
      v7 = 0;
    }
    *pcjFile = v7;
  }
  v11 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  return v2;
}

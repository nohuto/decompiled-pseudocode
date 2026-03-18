/*
 * XREFs of ?VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14005728C
 * Callers:
 *     VidSchiResetEngine @ 0x1400454F8 (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x140058740 (VidSchiResetHwEngine.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiCollectTdrPayloadEnginePageFault(struct _VIDSCH_NODE *a1, struct _TDR_RECOVERY_CONTEXT *a2)
{
  char *v2; // r9
  _BYTE *v4; // r8
  __int64 v6; // rcx
  char *v7; // rdx
  char *v8; // rax

  v2 = (char *)a1 + 2156;
  *((_QWORD *)a2 + 351) = *((_QWORD *)a1 + 272);
  v4 = (char *)a2 + 2821;
  if ( a1 == (struct _VIDSCH_NODE *)-2156LL )
    goto LABEL_9;
  v6 = 15LL;
  v7 = (char *)a2 + 2821;
  do
  {
    if ( v6 == -2147483631 )
      break;
    if ( !*v2 )
      break;
    *v7++ = *v2++;
    --v6;
  }
  while ( v6 );
  v8 = v7 - 1;
  if ( v6 )
    v8 = v7;
  *v8 = 0;
  if ( !v6 )
LABEL_9:
    *v4 = 0;
  *((_DWORD *)a2 + 709) = *((_DWORD *)a1 + 543);
}

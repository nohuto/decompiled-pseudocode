/*
 * XREFs of ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18008CF94
 * Callers:
 *     ?UpdateRealizationSize@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6538 (-UpdateRealizationSize@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B65A0 (-UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x1800CA57C (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetIconicWidth(CSecondaryWindowRepresentation *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 26);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 64);
  return result;
}

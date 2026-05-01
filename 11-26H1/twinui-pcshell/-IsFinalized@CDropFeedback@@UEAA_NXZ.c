/*
 * XREFs of ?IsFinalized@CDropFeedback@@UEAA_NXZ @ 0x18053E330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDropFeedback::IsFinalized(CDropFeedback *this)
{
  return *((_QWORD *)this + 13) == 0LL;
}

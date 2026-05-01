/*
 * XREFs of ?IsFinalized@CDropFeedback@@UEAA_NXZ @ 0x18051B4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDropFeedback::IsFinalized(CDropFeedback *this)
{
  return *((_QWORD *)this + 13) == 0LL;
}

/*
 * XREFs of ?CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ @ 0x180380AA0
 * Callers:
 *     ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x1803811E0 (-IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x180382010 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::CanShow(
        CPeopleBarFlyoutExperienceManager::DebounceDetection *this)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)this;
  return GetTickCount64() - v1 > 0x64;
}

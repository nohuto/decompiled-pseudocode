/*
 * XREFs of ?ScaleChanged@CVirtualTouchpadExperienceManager@@UEAAJI@Z @ 0x1803984B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::ScaleChanged(CVirtualTouchpadExperienceManager *this)
{
  CVirtualTouchpadExperienceManager *v1; // rcx

  v1 = (CVirtualTouchpadExperienceManager *)((char *)this - 24);
  if ( *((_BYTE *)v1 + 317) )
    return 0LL;
  else
    return CVirtualTouchpadExperienceManager::HandleScaleOrMonitorChange(v1);
}

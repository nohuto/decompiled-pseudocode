/*
 * XREFs of ?xxxSetSensorPresence@CRotationMgr@@UEAAXH@Z @ 0x1402733A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x140272DDC (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 */

void __fastcall CRotationMgr::xxxSetSensorPresence(CRotationMgr *this, int a2)
{
  if ( (int)UpdateAutoRotationRegistrySetting(
              a2,
              L"SensorPresent",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") >= 0 )
    *((_DWORD *)this + 4) = a2;
}

/*
 * XREFs of ??_GAppInstallService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x180093270
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppInstallService@Actions@CreativeFramework@@UEAA@XZ @ 0x18009319C (--1AppInstallService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Actions::AppInstallService *__fastcall CreativeFramework::Actions::AppInstallService::`scalar deleting destructor'(
        CreativeFramework::Actions::AppInstallService *this,
        char a2)
{
  CreativeFramework::Actions::AppInstallService::~AppInstallService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

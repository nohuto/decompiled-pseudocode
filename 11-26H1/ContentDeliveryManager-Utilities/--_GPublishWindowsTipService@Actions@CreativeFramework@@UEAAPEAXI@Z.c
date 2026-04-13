/*
 * XREFs of ??_GPublishWindowsTipService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800A2290
 * Callers:
 *     <none>
 * Callees:
 *     ??1PublishWindowsTipService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800A224C (--1PublishWindowsTipService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Actions::PublishWindowsTipService *__fastcall CreativeFramework::Actions::PublishWindowsTipService::`scalar deleting destructor'(
        CreativeFramework::Actions::PublishWindowsTipService *this,
        char a2)
{
  CreativeFramework::Actions::PublishWindowsTipService::~PublishWindowsTipService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

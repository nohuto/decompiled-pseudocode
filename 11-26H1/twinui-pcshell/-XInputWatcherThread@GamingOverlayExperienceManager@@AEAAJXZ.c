/*
 * XREFs of ?XInputWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180357814
 * Callers:
 *     ?StaticXInputWatcherThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x180354E60 (-StaticXInputWatcherThread@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?ProcessControllerInput@GamingOverlayExperienceManager@@AEAA_NKPEA_NPEAK@Z @ 0x180350E74 (-ProcessControllerInput@GamingOverlayExperienceManager@@AEAA_NKPEA_NPEAK@Z.c)
 */

DWORD __fastcall GamingOverlayExperienceManager::XInputWatcherThread(HANDLE *this)
{
  char v2; // r14
  _BYTE *v3; // rsi
  __int64 v4; // rdi
  DWORD *v5; // rbx
  DWORD TickCount; // r15d
  DWORD v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  DWORD result; // eax
  _DWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v12[4]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF

  v11[0] = 0;
  v13 = 0LL;
  v12[0] = GetTickCount();
  v12[1] = v12[0];
  v12[2] = v12[0];
  v12[3] = v12[0];
  do
  {
    v2 = 0;
    v3 = v11;
    v4 = 0LL;
    v5 = v12;
    TickCount = GetTickCount();
    do
    {
      if ( !*v3 )
      {
        if ( TickCount - *v5 < 0x1388 )
          goto LABEL_8;
        *v5 = TickCount;
      }
      if ( GamingOverlayExperienceManager::ProcessControllerInput(
             (GamingOverlayExperienceManager *)this,
             v4,
             (bool *)v11 + (unsigned int)v4,
             (unsigned int *)&v13 + v4) )
      {
        v2 = 1;
      }
LABEL_8:
      v4 = (unsigned int)(v4 + 1);
      ++v3;
      ++v5;
    }
    while ( (unsigned int)v4 < 4 );
    if ( v2 )
    {
      v7 = 20;
      goto LABEL_19;
    }
    v7 = 5000;
    v8 = 0LL;
    while ( 2 )
    {
      if ( *((_BYTE *)v11 + v8) )
      {
LABEL_16:
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= 4 )
          goto LABEL_19;
        continue;
      }
      break;
    }
    v9 = TickCount - v12[v8];
    if ( v9 < 0x1388 )
    {
      if ( v7 >= 5000 - v9 )
        v7 = 5000 - v9;
      goto LABEL_16;
    }
    v7 = 0;
LABEL_19:
    result = WaitForSingleObject(this[36], v7);
  }
  while ( result );
  return result;
}

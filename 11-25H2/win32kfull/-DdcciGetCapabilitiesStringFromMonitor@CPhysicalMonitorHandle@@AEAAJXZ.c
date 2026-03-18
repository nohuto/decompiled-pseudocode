/*
 * XREFs of ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140263120
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14020B7A8 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1401FE9AC (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1401FEA0C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x14020B8B8 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x1403238AC (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1403238C4 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(void **this)
{
  unsigned int v1; // esi
  char *v2; // r12
  unsigned __int64 v3; // r15
  unsigned int v4; // edi
  int v6; // ebx
  unsigned __int8 v7; // si
  unsigned int v8; // r13d
  char *Pool2; // rax
  size_t v10; // r8
  unsigned int v11; // esi
  unsigned int v12; // edi
  char *v13; // rax
  int v15; // [rsp+20h] [rbp-50h] BYREF
  int v16; // [rsp+28h] [rbp-48h] BYREF
  __int16 v17; // [rsp+2Ch] [rbp-44h]
  unsigned int v18; // [rsp+30h] [rbp-40h]
  char *v19; // [rsp+38h] [rbp-38h]
  _OWORD Src[2]; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+60h] [rbp-10h]
  __int16 v22; // [rsp+64h] [rbp-Ch]

  LOWORD(v1) = 0;
  v2 = 0LL;
  LODWORD(v3) = 0;
  v18 = 0;
  v4 = 0;
  while ( 1 )
  {
    v21 = 0;
    v22 = 0;
    v16 = 15958865;
    HIBYTE(v16) = BYTE1(v1);
    memset(Src, 0, sizeof(Src));
    v17 = (unsigned __int8)v1;
    v6 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice((CPhysicalMonitorHandle *)this, -500000LL, &v16, 6);
    if ( v6 < 0 )
      break;
    v6 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(
           (CPhysicalMonitorHandle *)this,
           -500000LL,
           Src,
           0x26u);
    if ( v6 < 0 )
      break;
    if ( (BYTE1(Src[0]) & 0x7Fu) < 3 || (v7 = (BYTE1(Src[0]) & 0x7F) - 3, v7 > 0x20u) )
    {
      v6 = -1071774331;
      break;
    }
    if ( (BYTE1(Src[0]) & 0x7F) == 3 )
      goto LABEL_17;
    v15 = v7;
    v8 = v7 + v4;
    if ( v8 < v4 )
    {
LABEL_20:
      v6 = -1073741675;
      break;
    }
    v6 = 0;
    if ( (unsigned int)v3 <= v8 )
    {
      if ( (_DWORD)v3 )
      {
        v3 = 2LL * (unsigned int)v3;
        if ( v3 > 0xFFFFFFFF )
          goto LABEL_20;
      }
      else
      {
        LODWORD(v3) = 2048;
      }
      Pool2 = (char *)ExAllocatePool2(258LL, (unsigned int)v3, 1664248135LL);
      v19 = Pool2;
      if ( !Pool2 )
      {
        v6 = -1073741801;
        break;
      }
      if ( v2 )
        memmove(Pool2, v2, v4);
      DDCCIFreeMemory(v2);
      v2 = v19;
    }
    v10 = v7;
    v11 = v18;
    memmove(&v2[v18], (char *)Src + 5, v10);
    v1 = v15 + v11;
    v4 = v8;
    v18 = v1;
    if ( v1 > 0xFFE0 )
    {
LABEL_17:
      if ( v4 )
      {
        if ( (unsigned int)v3 > v4 )
        {
          v2[v4] = 0;
          v12 = v4 + 1;
          OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v15, (struct OPM::CMutex *)(this + 9));
          if ( !CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized((CPhysicalMonitorHandle *)this) )
          {
            v13 = (char *)ExAllocatePool2(258LL, v12, 1664248135LL);
            this[10] = v13;
            if ( v13 )
            {
              v6 = RtlStringCbCopyA(v13, v12, v2);
              if ( v6 >= 0 )
              {
                *((_DWORD *)this + 22) = v12;
              }
              else
              {
                DDCCIFreeMemory(this[10]);
                this[10] = 0LL;
                *((_DWORD *)this + 22) = 0;
              }
            }
            else
            {
              v6 = -1073741801;
            }
          }
          OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v15);
        }
        else
        {
          v6 = -1071774328;
        }
      }
      else
      {
        v6 = -1071774329;
      }
      break;
    }
  }
  DDCCIFreeMemory(v2);
  return (unsigned int)v6;
}

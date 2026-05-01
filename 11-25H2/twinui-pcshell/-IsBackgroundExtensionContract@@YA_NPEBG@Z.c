/*
 * XREFs of ?IsBackgroundExtensionContract@@YA_NPEBG@Z @ 0x1806523C8
 * Callers:
 *     ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180652C50 (-v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

char __fastcall IsBackgroundExtensionContract(const unsigned __int16 *a1)
{
  __int64 v2; // rbx
  _QWORD v4[14]; // [rsp+20h] [rbp-29h]

  v4[0] = L"Windows.BackgroundTasks";
  v2 = 0LL;
  v4[1] = L"Windows.PreInstalledConfigTask";
  v4[2] = L"Windows.UpdateTask";
  v4[3] = L"Windows.AppService";
  v4[4] = L"Windows.AppointmentDataProvider";
  v4[5] = L"Windows.ContactDataProvider";
  v4[6] = L"Windows.EmailDataProvider";
  v4[7] = L"Windows.UserDataTaskDataProvider";
  v4[8] = L"Windows.PrintWorkflowBackgroundTask";
  v4[9] = L"Windows.BarcodeScannerProvider";
  v4[10] = L"Windows.PosPaymentConnector";
  v4[11] = L"Windows.PrintSupportExtension";
  v4[12] = L"Windows.PrintSupportWorkflow";
  v4[13] = L"Windows.PrintSupportVirtualPrinterWorkflow";
  while ( (unsigned int)v2 < 0xE )
  {
    if ( !(unsigned int)_o__wcsicmp(a1, v4[v2]) )
      return 1;
    v2 = (unsigned int)(v2 + 1);
  }
  return 0;
}
